#include <stdio.h>

typedef enum{false,true}bool;

typedef struct no{
    int valor;
    struct no *prox;
}pilha;

pilha *prim = NULL;
pilha *ult = NULL;

bool empilha(int valor){
    pilha *atual = prim;
    pilha *novo = (pilha *)malloc(sizeof(pilha))
    if(prim == NULL){
        ult = novo;
    }
    novo->valor = valor;
    novo->prox = prim;
    prim = novo;
    return true;
}

bool desempilha(){
    pilha *atual = prim;
    if(prim->prox == NULL){
        ult == NULL;
    }
    prim = prim->prox;
    free(atual);
}

int main(int argc, char *argv[]){
	return 0;
}
