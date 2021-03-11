#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_FILAS 3
#define TAM_NOME 50

typedef enum {false,true}bool;

typedef struct no{
    float tamanho;
    char nome[TAM_NOME];
    int prioridade;
    struct no *prox;
}noProcesso;

noProcesso *ult0 = NULL;
noProcesso *ult1 = NULL;
noProcesso *ult2 = NULL;

noProcesso *filaDeProcessos[NUM_FILAS];

bool prioridadesProcessos[10];

void inicializaFila (){
    int i;
    for(i=0;i<10;i++){
        filaDeProcessos[i] = NULL;
    }

}

void inicializaVetorPrioridades(){
    int i;
    for(i=0;i<10;i++){
        prioridadesProcessos[i] = false;
    }
}

void insereFila(float tamanho, char nome[], int pri){
    noProcesso *novo = (noProcesso *)malloc(sizeof(noProcesso));
    if(pri<=3){
       if(filaDeProcessos[0] == NULL){
            filaDeProcessos[0] = novo;
       }
       if(ult0 != NULL){
            ult0->prox = novo;
       }
       ult0 = novo;
    }
     if((pri>=4)&&(pri<=6)){
        if(filaDeProcessos[1] == NULL){
            filaDeProcessos[1] = novo;
       }
       if(ult1 != NULL){
            ult1->prox = novo;
       }
       ult1 = novo;
    }
     if((pri>=7)&&(pri<=9)){
        if(filaDeProcessos[2] == NULL){
            filaDeProcessos[2] = novo;
       }
       if(ult2 != NULL){
            ult2->prox = novo;
       }
       ult2 = novo;
    }
    novo->tamanho = tamanho;
    strcpy(novo->nome,nome);
    novo->prioridade = pri;
    novo->prox = NULL;
}

void imprimeDadosListasDeProcessos(){
    noProcesso *atual;
    int i;
    for(i=0;i<3;i++){
        atual = filaDeProcessos[i];
        while(atual!=NULL){
            printf("\nTamanho:%.1f ",atual->tamanho);
            printf("\nNome:%s ", atual->nome);
            printf("\nPrioridade: %d ", atual->prioridade);
            atual = atual->prox;
        }
    }
}

bool removePrimeiroDaFila(int fila){
    noProcesso *atual = filaDeProcessos[fila];
    noProcesso *ant = NULL;
    if(filaDeProcessos[fila]!=NULL){
        filaDeProcessos[fila] = filaDeProcessos[fila]->prox;
        free(atual);
        return true;
    }else{
        return false;
    }

}


int main(){
    inicializaFila();
    inicializaVetorPrioridades();
    insereFila(1, "BrOfficeCalc", 3);
    insereFila(2.3, "CodeBlocks", 9);
    insereFila(0.5, "Calculadora", 1);
    insereFila(6.4, "Firefox", 7);
    insereFila(3.1, "PfpMyAdmin", 2);
    insereFila(2.9, "Kile", 4);
    insereFila(4.5, "Gimp", 9);
    insereFila(5.5, "BrOfficeWriter", 6);
    insereFila(5.8, "GCC", 2);

    imprimeDadosListasDeProcessos();
    removePrimeiroDaFila(2);
    printf("\n\n\n");
    imprimeDadosListasDeProcessos();
    return 0;
}

