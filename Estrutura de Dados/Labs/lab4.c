#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum {false,true}bool;

typedef struct no{
    int mat;
    char nome[50], dis[20];
    float coef;
    struct no *prox;
}noaluno;

noaluno *pri = NULL;

bool insereAlunoLista(noaluno *aux){
    noaluno *ant = NULL;
    noaluno *atual = pri;

    noaluno *novo = (noaluno *)malloc(sizeof(noaluno));

    while((atual!=NULL)&&(strcmp(atual->nome,aux->nome)>0)){
        ant = atual;
        atual = atual->prox;
    }
    if(ant == NULL){
        pri = novo;
    }
    else{
        ant->prox = novo;
    }
    strcpy(novo->nome,aux->nome);
    novo->mat = aux->mat;
    strcpy(novo->dis,aux->dis);
    novo->coef = aux->coef;
    novo->prox=atual;
    return true;
}

bool removealuno(int valor){
    noaluno *ant = NULL;
    noaluno *atual = pri;

    while((atual!=NULL)&&(atual->mat!=valor)){
        ant=atual;
        atual = atual->prox;
    }
    if(atual == NULL){
        return false;
    }
    if(atual == pri){
        pri = atual->prox;
    }
    else{
        ant->prox = atual->prox ;
        free(atual);
        return true;
    }
}

void imprimelista(){
    noaluno *atual = pri;
    while(atual!=NULL){
        printf("Matricula : %d",atual->mat);
        printf("\nNome: %s", atual->nome);
        printf("\nDisciplina: %s",atual->dis);
        printf("\nCoeficiente: %.2f",atual->coef);
        atual = atual->prox;
        printf("\n");
    }
}

bool buscanome(int valor){
    noaluno *atual = pri;
    while((atual!=NULL) && (atual->mat!=valor)){
        atual = atual->prox;
    }
    if(atual == NULL){
        return false;
    }
    else{
        return true;
    }
}

void destroi(){
    noaluno *atual = pri;
    noaluno *apaga;

    while(atual!=NULL){
        apaga=atual;
        atual=atual->prox;
        free(atual);
    }
}


int main(int argc, char *argv[]){
    noaluno *aux = (noaluno *)malloc(sizeof(noaluno));
    int i=0;
    for(i=0;i<5;i++){
        printf("\nMatricula: ");
        scanf("%d",&aux->mat);
        if(buscanome(aux->mat)){
             printf("Digite outra matricula\n");
            i--;
        }else{
            getchar();
            printf("Nome: ");
            gets(aux->nome);
            printf("Disciplina: ");
            gets(aux->dis);
            printf("Coeficiente: ");
            scanf("%f",&aux->coef);
            insereAlunoLista(aux);
        }
    }
    printf("Digite a matricula que deseja remover");
    scanf("%d",&aux->mat);
    removealuno(aux->mat);
    imprimelista();
}
