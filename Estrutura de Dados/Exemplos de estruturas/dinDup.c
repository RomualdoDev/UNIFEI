#include <stdio.h>

typedef enum{false,true}bool;

typedef struct no{
    int valor;
    struct no *prox;
    struct no *ant;
}noDupEnc;

noDupEnc prim = NULL;
noDupEnc *ult = NULL;

bool insere(int valor){
    noDupEnc *atual = prim;
    noDupEnc *aux = NULL;
    noDupEnc *novo = (noDupEnc *)malloc(sizeof(noDupEnc));
    while((atual!=NULL)&&(atual->valor<valor)){
        aux = atual;
        atual = atual->prox;
    }
    if(aux = NULL){
        prim = novo;
    }
    else{
        aux->prox = novo;
    }
    if(atual = NULL){
        ult = novo
    }else{
        atual->ant = novo
    }
    novo->valor = valor;
    novo->prox = atual;
    novo->ant = aux;
    return true;
}

bool remove(int valor){
    noDupEnc *atual = prim;
    noDupEnc *aux = NULL;
    while((atual!=NULL)&&(atual->valor!=valor)){
        aux = atual;
        atual = atual->prox;
    }
    if(atual == NULL){
        return false;
    }
    if(atual == prim){
        prim = atual->prox;
    }else{
        aux->prox = atual->prox;
    }
    if(atual == ult){
        ult = atual->ant;
    }
    else{
        atual->prox->ant = aux;
    }
    free(atual);
}

int main(int argc, char *argv[]){
	return 0;
}
