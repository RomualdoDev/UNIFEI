#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

// ----------------- >>> definição do tipo modoCaminhamento
typedef enum {false,true}bool;

typedef struct no{
  char cep[9];
  char uf[3];
  char cidade[31];
  char logradouro[61];
  struct no *esq;
  struct no *dir;
}noCEP; //estrutura dos nos

noCEP *arvBinaria;

int quant;

void inserirNoArvoreBinaria(FILE *arq){
    char linha[200];
    char *substring;
    int i;
    noCEP *ant = NULL;
    noCEP *atual = arvBinaria;
    noCEP *novo;

    //aloca o novo na memoria
    novo = (noCEP *) malloc(sizeof(noCEP));

    //le a linha completa e preenche os dados no novo cep
    fgets(linha, 200, arq);

    //separa os tokens pelo delimitador \t
    substring = strtok(linha, "\t");

    //obtem o cep
    if(substring != NULL) {
      strcpy(novo->cep, substring);
    }
    substring = strtok(NULL, "\t");

    //obtem a uf
    if(substring != NULL)
      strcpy(novo->uf, substring);

    substring = strtok(NULL, "\t");

    //obtem a cidade
    if(substring != NULL)
      strcpy(novo->cidade, substring);

    substring = strtok(NULL, "\t");

    //obtem o logradouro
    if(substring != NULL)
      strcpy(novo->logradouro, substring);

    //incializa com null os ponteiros esq e dir de novo
    novo->esq = NULL;
    novo->dir = NULL;

    //printf("\nLido os dados de um cep: \n");
    //imprimenoCEP(novo);


    // ----------------- >>> COMPLETE!
    // ----------------- >>> codigo para insercao na arvore
    while(atual != NULL){
        ant = atual;
     //verifica o lado para descer
        if(strcmp(novo->cep,ant->cep)<0){
            atual = atual->esq;
        }//end if
        else{
            atual = atual->dir;
        }//end else
    }//end while
    if(ant == NULL){ //nao existe raiz
        arvBinaria = novo;
    }//end if
    else{
    //se nao existe elemento na subarvore
        if(atual == NULL){
        //qual lado deve ser inserido
            if(strcmp(novo->cep,ant->cep)<0){
                ant->esq = novo;
            }
            else{
                ant->dir = novo;
            }//end else
        }//end if(atual==NULL)
        else{
            return false;
        }//end else
    }//end else
    quant++; //incrementa quantidade
    return true;
 }//end in

// ----------------- >>> codigo das funcoes imprimenoCEP, imprimePreOrdemArvBB,
// ----------------- >>> imprimeEmOrdemArvBB, imprimePosOrdemArvBB e
// ----------------- >>> buscarArvoreBinaria

void imprimeNoCEP(noCEP *n){
        printf(" %s ", n->cep);
        printf(" \n%s ", n->uf);
        printf(" \n%s ", n->logradouro);
        printf(" \n%s ", n->cidade);
}


void imprimePreOrdemArvBB(noCEP *n){
    if(n != NULL){
        imprimeNoCEP(n);
        imprimePreOrdemArvBB(n->esq);
        imprimePreOrdemArvBB(n->dir);
    }
}

void imprimeEmOrdemArvBB(noCEP *n){
    if(n != NULL){
        imprimeEmOrdemArvBB(n->esq);
        imprimeNoCEP(n);
        imprimeEmOrdemArvBB(n->dir);
    }
}

void imprimePosOrdemArvBB(noCEP *n){
    if(n != NULL){
        imprimePosOrdemArvBB(n->esq);
        imprimePosOrdemArvBB(n->dir);
        imprimeNoCEP(n);
    }
}




bool buscarArvoreBinaria(noCEP *atual, char cep[9]){
    bool result;
    if(atual != NULL){
        if(strcmp(atual->cep,cep)==0){
            imprimeNoCEP(atual);
            result = true;
        }else{
            if(strcmp(atual->cep,cep)>0)
                result = buscarArvoreBinaria(atual->esq,cep);
            else
                result = buscarArvoreBinaria(atual->dir,cep);
        }
    }
    else
        result = false;
        return result;
 }


// função principal: já está TODA IMPLEMENTADA
int main(int argc, char *argv[]){
  FILE *arq;
  int opcaoMenu;
  char cepProcurado[9];
  noCEP *cepEncontrado;
  int i = 0;

  //inicializa a arvore
  arvBinaria = NULL;

  //o arquivo eh lido e inserido os elementos na arvore
  arq = fopen("baseCep.txt", "r");

  if(!arq){
    printf("O arquivo nao pode ser aberto.\n");
    exit(1);
  }//end if(!arq)

  printf("\nInserindo elementos na arvore... \n");
  while(!feof(arq)&&(i<10)){
    //para cada linha do arquivo pe chamada
    //a funcao de insercao na arvore binaria
    inserirNoArvoreBinaria(arq);
    i++;
  }//end while(!feof(arq))
  fclose(arq);

  //menu para caminhamento na arvore de ceps
  opcaoMenu = 1;
  while(opcaoMenu != 4){
    quant = 0;

    printf("|Selecione uma das opcoes do menu: |\n");
    printf("|1 - Pre-ordem                |\n");
    printf("|2 - Em-ordem                 |\n");
    printf("|3 - Pos-ordem                |\n");
    printf("|4 - Sair                     |\n\n");
    printf(">");

    scanf("%d", &opcaoMenu);
    switch(opcaoMenu){
      case 1:
         printf("Imprime em pre-ordem: \n");
         imprimePreOrdemArvBB(arvBinaria);
         printf("\n");
         break;

      case 2:
         printf("Imprime em in-ordem: \n");
         imprimeEmOrdemArvBB(arvBinaria);
         printf("\n");
         break;

      case 3:
         printf("Imprime em pos-ordem: \n");
         imprimePosOrdemArvBB(arvBinaria);
         printf("\n");
         break;

      case 4:
         printf("Saindo do menu impressoes: ");
         break;
    }//end switch
  }//end while(opcaoMenu != 4)

  // chamada à busca por um cep
  printf("\n>>> Busca por um cep: \n");
  printf(">> Digite um cep: ");
  scanf("%s", cepProcurado);
  buscarArvoreBinaria(arvBinaria,cepProcurado);

  printf("Encerrando o programa...\n");

  free(arvBinaria);

  system("PAUSE");
  return 0;
}//end main
