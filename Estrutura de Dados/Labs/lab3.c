#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct no{
    int face1;
    int face2;
    struct no* prox;
}noPeca;
noPeca* pilha = NULL;
noPeca* prijog1 = NULL;
noPeca* prijog2 = NULL;
noPeca* primesa = NULL;

int inicializa(){
    noPeca *aux;
    int i, j, c1=0, c2=0, sor;
    srand(time(NULL));
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("[%d-%d]",i,j);
            aux = (noPeca*)malloc(sizeof(noPeca));
            aux->face1=i;
            aux->face2=j;
            if((c1==14)&&(c2==13)){
                sor=2;
            }else{
                if(c1==14){
                    sor=1;
                    }else{
                        if(c2==13){
                            sor=0;
                        }else{
                            sor=rand()%3;
                        }
                    }
            }
            if((i==6)&&(j==6)){
                primesa=aux;
            }else{
                if(sor==0){
                    aux->prox=prijog1;
                    prijog1=aux;
                    c1++;
                }else{
                    if(sor==1){
                        aux->prox=prijog2;
                        prijog2=aux;
                        c2++;
                    }else{
                        aux->prox=pilha;
                        pilha=aux;
                    }
                }
            }
        }
        printf("\n");
    }
    if(c1==14){
        return 0;
    }else{
        return 1;
    }
}


void imprime(noPeca *aux){
    while(aux!=NULL){
        printf("[%d-%d]",aux->face1,aux->face2);
        aux=aux->prox;
    }
}

void insereInicioMesa(noPeca *peca){
    peca->prox = primesa;
    primesa = peca;
}

void insereFimMesa(noPeca *peca){
    noPeca* atual = primesa;
    while(atual->prox!=NULL){
        atual = atual->prox;
    }
    atual->prox = peca;
    peca->prox=NULL;
}

noPeca* removejogador1(int peca){
    noPeca *ant = NULL;
    noPeca *atual = prijog1;
    while((atual!=NULL)&&((atual->face1!=peca) && (atual->face2!=peca))){
        ant = atual;
        atual = atual->prox;
    }
    if(atual == NULL){
        return NULL;
    }
    else{
        if(atual == prijog1){
            prijog1 = atual->prox;
        }
        else{
            ant->prox = atual->prox;
        }
    }
    return atual;
}

noPeca* removejogador2(int peca){
    noPeca *ant = NULL;
    noPeca *atual = prijog2;
    while((atual!=NULL)&&((atual->face1!=peca) && (atual->face2!=peca))){
        ant = atual;
        atual = atual->prox;
    }
    if(atual == NULL){
        return NULL;
    }
    else{
        if(atual == prijog2){
            prijog2 = atual->prox;
        }
        else{
            ant->prox = atual->prox;
        }
    }
    return atual;
}



int main(){
    int ini = 6, fim = 6;
    int jogador = inicializa();
    noPeca *aux;
    while((prijog1!=NULL)&&(prijog2!=NULL)){
        printf("\nJogador 1:");
        imprime(prijog1);
        printf("\nJogador 2:");
        imprime(prijog2);
        printf("\nMesa:");
        imprime(primesa);
        getchar();
        system("cls");
        if(jogador==0){
            aux = removejogador1(ini);
            if(aux!=NULL){
                insereInicioMesa(aux);
                if(aux->face1 == ini){
                    ini = aux->face2;
                }else{
                    ini = aux->face1;
                }
            }else{
            aux = removejogador1(fim);
            if(aux!=NULL){
                insereFimMesa(aux);
                if(aux->face1 == fim){
                    fim = aux->face2;
                }else{
                    fim = aux->face1;
                }
            }
        }
        jogador = 1;
    }else{
        aux = removejogador2(ini);
        if(aux!=NULL){
                insereInicioMesa(aux);
                if(aux->face1 == ini){
                    ini = aux->face2;
                }else{
                    ini = aux->face1;
                }
            }else{
                aux = removejogador2(fim);
                if(aux!=NULL){
                    insereFimMesa(aux);
                    if(aux->face1 == fim){
                        fim = aux->face2;
                    }else{
                        fim = aux->face1;
                    }
                }
            }
            jogador = 0;
        }
    }
    return 0;
}

