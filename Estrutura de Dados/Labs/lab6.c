#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define TAM_NOME 20

typedef enum {false, true} bool;

typedef struct no{
    char nome[TAM_NOME];
    int matricula, turma;
    float coef;
    struct no *prox;
    struct no *ant;

} noAluno;

noAluno *prim = NULL, *ult=NULL;

bool buscaMatricula(int valor){
    noAluno *aux = prim;
    while (aux != NULL){
        if (aux->matricula == valor){
            return true;
        }
        aux = aux->prox;
        if(aux == prim){
            return false;
        }
    }
    return false;
}

bool insereContato (noAluno *novo){
    noAluno *atual = prim;
    noAluno *aux = NULL;
    if(prim == NULL){
        prim = novo;
        ult = novo;
        novo->prox = novo;
        novo->ant = novo;
    }
    else{
        while(strcmp(atual->nome,novo->nome)<0){
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
        }
        else{
            aux->prox = novo;
            novo->ant = aux;
        }
        novo->prox = atual;
        atual->ant = novo;
        if(atual == prim){
            ult = novo;
        }
    }
    return true;
}


void imprimeLista(){
    noAluno *atual = ult;
    if(atual != NULL){
        while(true){
            printf("Nome: %s",atual->nome);
            printf("\nMatricula: %d",atual->matricula);
            printf("\nTurma: %d",atual->turma);
            printf("\nCoeficiente: %f",atual->coef);
            printf("\n");
            printf("\n");
            atual = atual->ant;
            if(atual == ult){
                break;
            }
        }
    }
}

bool removeContato (int valor){
    noAluno *aux = NULL;
    noAluno *atual = prim;
    if(atual != NULL){
        while(atual->matricula != valor){
            aux = atual;
            atual = atual->prox;
            if(atual == prim){
                break;
            }
        }
        if(atual->matricula != valor){
            return false;
        }
        else{
            if(atual == prim){
                prim = atual->prox;
                ult->prox = prim;
                prim->ant = ult;
                free(atual);
            }
            else{
                aux->prox = atual->prox;
                atual->prox->ant=aux;
                if(atual == ult){
                ult = aux;
                }
                free(atual);
            }
            return true;
        }
    }
    else{
        return false;
    }
}

void destroiLista(){
    noAluno *atual = prim,*apaga=NULL;
    while(true){
        apaga = atual;
        atual = atual->prox;
        free(apaga);
        if(atual == prim){
            break;
        }
    }
}

int main(int argc,char *argv[]){
    int escolha=0,matricula;
    noAluno *inf;
    while(escolha != 4){
        printf("\n");
        printf("Digite uma das opcoes abaixo: \n");
        printf(">>1 para inserir um aluno;\n");
        printf(">>2 para remover um aluno;\n");
        printf(">>3 para listar todos os alunos;\n");
        printf(">>4 para sair \n");
        scanf("%d", &escolha);
        getchar();
        system("cls");
        printf("\n");
        switch(escolha){
            case 1:
                printf("Digite o numero de matricula: \n");
                scanf("%d",&matricula);
                getchar();
                if (buscaMatricula(matricula) == true){
                    printf("Matricula ja presente\n");
                    system("pause");
                    break;
                }
                else{
                    inf = (noAluno*)malloc(sizeof(noAluno));
                    printf("Digite o nome do aluno: \n");
                    gets(inf->nome);
                    printf("Digite o coef: \n");
                    scanf("%f",&inf->coef);
                    printf("Digite a turma: \n");
                    scanf("%d",&inf->turma);
                    inf->matricula = matricula;
                    insereContato(inf);
                    break;
                }
            case 2:
                printf("Digite a matricula a ser removida: ");
                scanf("%d",&matricula);
                if (buscaMatricula(matricula) == false){
                    printf("\n");
                    printf("Matricula nao encontrada\n");
                    system("pause");
                    break;
                }
                else{
                    removeContato(matricula);
                    break;
                }
            case 3:
                imprimeLista();
                system("pause");
                break;
            default:
                printf("Ate logo!");
                break;
        }
    }
    destroiLista(prim);
    return 0;
}
