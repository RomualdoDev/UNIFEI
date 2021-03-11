#include <stdio.h>
#include <stdlib.h>

typedef enum {false,true}bool;

typedef struct no{
    int valor;
    struct no *prox;
}noCedula;

noCedula *pilha[7];

noCedula *prim = NULL;

int valorNota[7] = {1,2,5,10,20,50,100};

void inicilizaPilha(){
    int i;
    for(i=0;i<7;i++){
        pilha[i] = NULL;
    }
}

void abastecePilha(int quant, int v){
    int i;
    int pos;
    noCedula *novo;
    switch(v){
    case 1:
        pos = 0;
        break;
    case 2:
        pos = 1;
        break;
    case 5:
        pos = 2;
        break;
    case 10:
        pos = 3;
        break;
    case 20:
        pos = 4;
        break;
    case 50:
        pos = 5;
        break;
    case 100:
        pos = 6;
        break;
    default:
        printf("valor de cedula invalido\n");
    }
    for(i=0;i<quant;i++){
        novo = (noCedula *)malloc(sizeof(noCedula));
        novo->valor = v;
        novo->prox = pilha[pos];
        pilha[pos] = novo;
    }
}


void imprimeSaldo(){
    noCedula *atual;
    int i, soma = 0;
    for(i=0;i<7;i++){
        atual = pilha[i];
        while(atual!=NULL){
            soma+=atual->valor;
            atual = atual->prox;
        }
    }
    printf("Saldo = %d\n", soma);
}


void imprimeSomaCedulas(){
    noCedula *atual;
    int i, soma= 0;
    for(i=0;i<7;i++){
        atual = pilha[i];
        soma = 0;
        while(atual!=NULL){
            soma+=atual->valor;
            atual = atual->prox;
        }
        printf("Salddo em notas de %d = %d\n", valorNota[i],soma);
    }
    printf("\n");
}


bool saqueDisponivel(int valor){
    int i;
    noCedula *atual;
    for(i=6;i>=0;i--){
        atual = pilha[i];
        while((atual!=NULL)&&((valor / valorNota[i]) >= 1)){
            valor-=atual->valor;
            atual = atual->prox;
        }
    }
    if(valor == 0){
        return true;
    }else{
        return false;
    }
}


bool saque(int valor){
    int i;
    noCedula *atual;
    if(saqueDisponivel(valor)==true){
        for(i=6;i>=0;i--){
            while((pilha[i]!=NULL)&&((valor / valorNota[i]) >= 1)){
                valor-=pilha[i]->valor;
                atual = pilha[i];
                pilha[i] = atual->prox;
                free(atual);
            }
        }
        return true;
    }else{
        return false;
    }
}

int main(){
    int valor;
    abastecePilha(80,100);
    abastecePilha(70,50);
    abastecePilha(150,20);
    abastecePilha(200,10);
    abastecePilha(30,5);
    abastecePilha(55,2);
    abastecePilha(100,1);
    printf("Caixa abastecido\n");
    system("pause");
    system("cls");
    imprimeSaldo();
    system("pause");
    system("cls");
    printf("Digite o valor a ser sacado: \n");
    scanf("%d", &valor);
    if(saqueDisponivel(valor)==true){
        printf("Saque Disponivel\n");
        saque(valor);
    }
    else{
        printf("Voce esta pobre!\n");
    }
    system("pause");
    system("cls");
    imprimeSomaCedulas();
    return 0;
}
