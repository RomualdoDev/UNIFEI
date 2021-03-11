#include <stdio.h>

typedef struct no{
    int valor;
    struct no *prox;
}noDinEnc;

noDinEnc *prim = NULL;

int insere(int valor){
    noDinEnc *atual = prim;
    noDinEnc *ant = NULL;
    noDinEnc *novo = (noDinEnc*)malloc(sizeof(noDinEnc));
    while((atual!=NULL)&&(atual->valor < valor)){
        ant = atual;
        atual = atual->prox;
    }
    if(ant == NULL){
        prim = novo;
    }
    else{
        ant->prox = novo;
    }
    novo->valor = valor;
    novo->prox = atual;
    return true;
}

bool remove(int valor){
    noDinEnc *atual = prim;
    noDinEnc *ant = NULL;
    while((atual!=NULL)&&(atual->valor!=valor)){
        ant = atual;
        atual = atual->prox;
    }
    if(atual == NULL){
        return false;
    }
    if(atual == prim){
        prim = atual->prox;
    }else{
        ant->prox = atual->prox;
    }
    free(atual);
}

int busca(int valor){
    noDinEnc *atual = prim;
    while((atual!=NULL)&&(atual->valor!=valor)){
        atual = atual->prox;
        i++;
    }
    if(atual == NULL){
        return -1;
    }else{
        return i;
    }
}

void destroi(){
    noDinEnc *atual = prim;
    noDinEnc apaga = NULL;
    while(atual!=NULL){
        apaga = atual;
        atual = atual->prox
        free(apaga)
    }
}

int main(int argc, char *argv[]){
	return 0;
}
