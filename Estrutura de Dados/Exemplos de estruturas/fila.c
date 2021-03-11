#include <stdio.h>

typedef enum{false,true}bool;

typedef struct no{
    int valor;
    struct no *prox;
}fila;

fila *prim = NULL;
fila *ult = NULL;

bool inserefila(int valor){
    fila *atual = prim;
    fila *novo = (fila *)malloc(sizeof(fila));
    if(prim == NULL){
        prim = novo;
    }
    novo->valor = valor;
    novo->prox = NULL;
    if(ult!=NULL){
        ult->prox = novo;
    }
    ult = novo;
    return true;
}

bool saifila(int valor){
    fila *atual = prim;
    if(prim->prox == NULL){
        ult = NULL;
    }
    prim = prim->prox;
    free(atual);
}
int main(int argc, char *argv[]){
	return 0;
}
