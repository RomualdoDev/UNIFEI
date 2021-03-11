#include <stdio.h>

typedef enum{false,true}bool;

int prim = -1;
int dispo = 0;

typedef struct{
    int valor;
    int prox;
}teste;

teste v[10];

bool insere(int valor){
    int ant, atual , novo;
    if(dispo = -1){
        return false;
    }else{
        ant = -1;
        atual = prim;
        novo = dispo;
    }
    while((atual!=-1)&&(v[atual].valor < valor)){
        ant = atual;
        atual = v[i].prox;
    }
    dispo = v[dispo].prox;
    if(ant == -1){
        prim = novo;
    }else{
        v[ant].prox = novo;
    }
    v[novo].valor = valor;
    v[novo].prox = atual;
    return true;
}

bool remove(int valor){
    int atual = prim;
    int ant = -1

    while((atual!=-1)&&(v[atual]!=valor)){
        ant = atual;
        atual = v[atual].prox;
    }
    if(atual == -1){
        return false;
    }else{
        if(ant = -1){
            prim = v[atual].prox;
        }else{
            v[ant].prox = v[atual].prox;
        }
        v[atual].prox = dispo;
        dispo = atual;
        return true;
    }
}

int busca(int valor){
    atual = prim;
    while((atual!=-1)&&(v[atual].valor!=valor)){
        atual = v[atual].prox;
    }
    return 1;
}

int main(int argc, char *argv[]){
	return 0;
}
