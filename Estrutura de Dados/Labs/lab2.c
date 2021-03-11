#include <stdio.h>
#include <string.h>
#define max 3

typedef enum {false, true} bool;

typedef struct
{
    char nome[20];
    int matr, prox;
    float imc;
} noAluno;

noAluno aluno[max];
int prim = -1;
int disp = 0;


void inicializaLista()
{
    int i;
    for(i=0; i<max-1; i++)
    {
        aluno[i].prox = i+1;
    }
}

bool insereAluno(noAluno tem)
{
    int ant, atual, novo;
    if(disp == -1)
    {
        return false;
    }
    else
    {
        ant = -1;
        atual = prim;
        novo = disp;
        while((atual!=-1)&&(aluno[atual].matr<tem.matr))
        {
            ant = atual;
            atual = aluno[atual].prox;
        }
        disp = aluno[disp].prox;
        if(ant == -1)
        {
            prim=novo;
        }
        else
        {
            aluno[ant].prox = novo;
        }
        aluno[novo].matr = tem.matr;
        aluno[novo].prox = atual;
        strcpy(aluno[novo].nome,tem.nome);
        aluno[novo].imc = tem.imc;
    }
    return true;
}


int buscaAluno(int chave)
{
    int pos = prim;
    while((pos!=-1) && (aluno[pos].matr!=chave))
    {
        pos = aluno[pos].prox;
    }
    return pos;
}


void imprimeLista()
{
    int i = 0;
    int pos = prim;
    for(i=0; i<3; i++)
    {
        printf("[(%2d)%3d %s %.0f] \n", aluno[i].prox, aluno[i].matr, aluno[i].nome, aluno[i].imc);
    }
}

int main(int argc, char *argv[])
{
    noAluno tem;
    int i, aux;
    inicializaLista();
    for(i=0; i<max; i++)
    {
        printf("Digite o numero de matricula \n");
        scanf("%d",&tem.matr);
        getchar();
        if(buscaAluno(tem.matr)==-1)
        {
            printf("Digite o nome do aluno \n");
            gets(tem.nome);
            printf("Digite o IMC \n");
            scanf("%f",&tem.imc);
            insereAluno(tem);
        }
        else
        {
            i--;
        }
    }
    imprimeLista();
    printf("Digite a matricula que deseja \n");
    scanf("%d", &aux);
    printf("O aluno esta na posicao %d", buscaAluno(aux));
    return 0;
}
