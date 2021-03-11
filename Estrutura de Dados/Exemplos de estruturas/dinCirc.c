#include <stdio.h>

typedef enum{false,true}bool;

typedef struct no{
    int valor;
    struct no *prox;
    struct no *ant;
}noCirc;

noCirc *prim = NULL;
noCirc *ult = NULL;

noCirc *prim = NULL;
noCirc *ult = NULL;

bool insere(int valor){
    noCirc *atual = prim;
    noCirc *aux = NULL;
    noCirc *novo = (noCirc *)malloc(sizeof(noCirc));
    if(prim == NULL){
        prim = novo;
        ult = novo;
        novo->prox = novo;
        novo->ant = novo;
    }
    else{
        while(atual->valor < valor){
             aux = atual;
             atual = atual->prox;
             if(atual == prim){
                break;
             }
        }
        if(aux == NULL){
            prim = novo;
            ult->prox = prim;
            prim->ant = ult;
        }else{
            aux->prox = novo;
            novo->ant = aux;
        }
        if(atual == prim){
            ult->prox = novo;
            ult == novo;
            prim->ant = ult;
        }
        else{
            atual->ant = novo;
        }
        novo->valor = valor;
        novo->prox = atual;
    }
}

bool remove(int valor){
    noCirc *atual = prim;
    noCirc *aux = NULL;
    if(atual!=NULL){
        while(atual->valor!=valor){
            aux = atual;
            atual = atual->prox;
        if(atual == prim){
            break;
        }
    }
    if(atual->valor!=valor){
        return false;
    }else{
        if(atual==prim){
            prim = atual->prox;
            novo->prox = prim;
            prim->ant = ult;
            free(atual);
        }else{
            aux->prox = atual->prox;
            if(atual == ult){
                ult = aux;
            }else{
                atual->prox->ant = aux;
            }
            free(atual);
        }
        return true;
    }
}else{
    return false;
}
}

int main(int argc, char *argv[]){
	return 0;
}
