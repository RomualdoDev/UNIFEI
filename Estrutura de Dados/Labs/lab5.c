#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_NOME 20
#define TAM_TELEFONE 10

typedef enum {false,true}bool;

typedef struct no{
    char nome[TAM_NOME];
    char telefone[TAM_TELEFONE];
    struct no *prox;
    struct no *ant;
}noContato;
noContato *prim = NULL;
noContato *ult = NULL;

bool insereContatoNaAgenda(char nome[], char telefone[]){
    noContato *aux = NULL;
    noContato *atual = prim;
    noContato *novo = (noContato*)malloc(sizeof(noContato));

    while((atual!=NULL)&&(strcmp(atual->nome,nome)>0)){
        aux = atual;
        atual = atual->prox;
    }
    if(aux == NULL){
        prim = novo;
    }else{
        aux->prox = novo;
    }
    if(atual == NULL){
        ult = novo;
    }else{
        atual->ant = novo;
    }
    strcpy(novo->nome,nome);
    strcpy(novo->telefone,telefone);
    novo->prox = atual;
    novo->ant = aux;
    return true;
}


void imprimeAgenda(){
    noContato *atual = prim;
    while(atual!=NULL){
        printf("Nome: %s",atual->nome);
        printf("\nTelefone: %s",atual->telefone)/
        printf("\n");
        printf("\n");
        atual = atual->prox;
    }
}


bool removeContatoDaAgenda(char nome[]){
    noContato *aux = NULL;
    noContato *atual = prim;

    while((atual!=NULL)&&(strcmp(atual->nome,nome)<0)){
        aux = atual;
        atual = atual->prox;
    }
    if(atual == NULL){
        return false;
    }else{
        if(atual == prim){
            prim = atual->prox;
        }else{
            aux->prox = atual->prox;
        }
        if(atual = ult){
            ult = aux;
        }else{
            atual->prox->ant = aux;
        }
        free(atual);
        return true;
    }
}

void menu(){
    printf("Digite uma das opcoes abaixo");
    printf("\n>> 1 para inserir um contato na agenda");
    printf("\n>> 2 para remover um contato na agenda");
    printf("\n>> 3 para listar os contatos da agenda");
    printf("\n>> 4 para sair da agenda\n");
}

int buscaTelefone(char telefone[]){
    noContato *atual = prim;
    while((atual!=NULL)&&(strcmp(atual->telefone,telefone)!=0)){
        atual = atual->prox;
    }
    if(atual == NULL){
        return 0;
    }else{
        return 1;
    }
}

int main(int argc, char *argv[]){
    int op = 0;
    char nome[TAM_NOME];
    char telefone[TAM_TELEFONE];
while(op!=4){
    menu();
    scanf("%d",&op);
    getchar();
    switch(op){
case 1:
    printf("Digite o nome do contato\n");
    gets(nome);
    printf("\nDigite o telefone\n");
    gets(telefone);
    if(buscaTelefone(telefone)==0){
        insereContatoNaAgenda(nome,telefone);
    }else{
        printf("\nDigite um telefone valido");
        gets(telefone);
    }
    system("cls");
    break;
case 2:
    printf("Digite o nome do contato\n");
    gets(nome);
    removeContatoDaAgenda(nome);
    system("cls");
    break;
case 3:
    system("cls");
    imprimeAgenda();
    break;
default:
    printf("Ate logo!");
    }
}
    return 0;
}
