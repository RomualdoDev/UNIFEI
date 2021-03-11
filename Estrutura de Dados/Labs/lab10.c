#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10

/*
    a) Declare uma estrutura denominada noHash
*/

typedef struct{
    char nome[50];
    int matricula;
}noHash;

/*
    b) Declare uma variável tab_hash_alunos
*/
noHash tab_hash_alunos[69];

//inicializa Tabela Hash com valores inválidos
void inicializa(){
  int i;
  for(i = 0; i < MAX; i++)
    tab_hash_alunos[i].matricula = -1;
  return;
}//end inicializa()

/*
    Complete a função inserirElementoTabHash
*/
void inserirElementoTabHash(noHash atual){
  //pos e a posicao que deve ser inserido no vetor
  int posp,pos, n_comparacoes = 1;

  //calcule funcao de hashing
    pos = atual.matricula%MAX;
    posp = pos;
  //se posicao estiver vazia, insere
  if(tab_hash_alunos[pos].matricula == -1){
    strcpy(tab_hash_alunos[pos].nome,atual.nome);
    tab_hash_alunos[pos].matricula = atual.matricula;
    //imprime informacoes
    imprimeNoHash(atual, posp, n_comparacoes,pos);
    return;
  }//end if
  else{
    //enquanto nao encontrar posicao vazia, prossiga procurando
    while(n_comparacoes < MAX){
    //1º) pos recebe a proxima posicao
        pos++;
        if(pos > MAX){
            pos = 0;
        }
    //2º) incrementa numero de comparacoes
        n_comparacoes++;
      if(tab_hash_alunos[pos].matricula == -1){
        //copia informacoes
        strcpy(tab_hash_alunos[pos].nome,atual.nome);
        tab_hash_alunos[pos].matricula = atual.matricula;
       //imprime informacoes
        imprimeNoHash(atual, posp, n_comparacoes,pos);
       return;
      }//end if
    }//end while
  }//end else
}//end inserirElementoTabHash

/*
    d) Implmente a função que imprime informacoes sobre aluno
*/
void imprimeNoHash(noHash atual, int pos, int comp, int ins){
    printf("Matricula: %d",atual.matricula);
    printf("\nNome: %s",atual.nome);
    printf("\nDeveria ser inserido na posicao: %d", pos);
    printf("\nFoi inserido na posicao: %d", ins);
    printf("\nHouve %d comparacoes", comp);
}
/*
    e) crie uma funcao denominada buscaAluno
*/

void buscaAluno(int elem){
    int pos = elem%MAX;
    int posp = pos;
    int comp = 0;
    while((elem != tab_hash_alunos[pos].matricula)&&(tab_hash_alunos[pos].matricula != -1)){
        pos++;
        comp++;
        if(pos == MAX){
            pos = 0;
        }
    }
    imprimeNoHash(tab_hash_alunos[pos],posp,comp,pos);
}

void imprimeVetor(){
  int i;
  for(i=0; i<MAX; i++){
    printf("\nv[%d] = %d  %s\n", i, tab_hash_alunos[i].matricula,tab_hash_alunos[i].nome);
  }//end for
}//end imprimeVetor()

int main(int argc, char *argv[]){
  int i, opcaoMenu,matricula;
  noHash novo;

  //inicializa tabela hash
  inicializa();

  //lista de nomes
  char listaNomes[MAX][50] = {
       "ADRIELLE MESSIAS GEREZ",
       "AFONSO AMBRÓSIO BEIRAL SATOLO MONTEIRO",
       "ALBERTO SARTORI RODRIGUES",
       "ALVARO MAIA DE SOUZA E PAULA",
       "ANA NILCE MACIEL PEREIRA",
       "ANDRE LUIZ DE OLIVEIRA DALEFFI",
       "ANTONIO LUIZ BUENO",
       "ARNO TEIXEIRA SOARES JUNIOR",
       "BRENO SALGADO DE OLIVEIRA",
       "BRUNO AFONSO LOBO",
       "BRUNO HENRIQUE XAVIER",
       "BRUNO QUISSAK BARTELEGA TONIOLO DE CARVALHO",
       "BRYAN FORTUNATO DE SOUZA",
       "CAIKE DE SOUZA PIZA",
       "CAIO AUGUSTO VILELA SILVA",
       "CAIQUE CLEBER DIAS DE REZENDE",
       "CONRADO MELONI CAMPOS",
       "DANIEL TOMAZ DE BRITO DE ARAUJO",
       "DIEGO SILVA BEKER DOS REIS",
       "DIEGO SISTE BARBOSA",
       "ESTEVES MOREIRA DE LIMA",
       "EZEQUIEL VICTOR DA SILVA",
       "FELIPE KALLAS SILVA",
       "FELIPE SILVA DE PAULA",
       "FELIPE TOSHIO HIKITA DA SILVA",
       "FREDERICO TAVARES DIRENE NEVES",
       "GABRIEL JOSE PINTO",
       "GABRIEL LIMA FERREIRA",
       "GABRIEL MARCOS CARDOSO AMORIM",
       "GABRIEL NORO CRIVELLENTI",
       "GUILHERME ALBERTI DA SILVA",
       "GUILHERME DELGADO DE CARVALHO DA COSTA BRAGA",
       "GUILHERME ESTREANO DOS SANTOS",
       "GUILHERME PINHEIRO DOS SANTOS",
       "HELOISA GRANATO FRANCO",
       "ITALO BARBOSA BARROS",
       "JAYME JOSE DOS SANTOS NETO",
       "JOAO PEDRO CALIL LEMOS",
       "JOARÊS FRANCO JÚNIOR",
       "JONAS BORGES LEAO DE MORAES",
       "JOSE LUIZ DA SILVA NETO",
       "JOSE MARCEL MENDES NOGUEIRA",
       "JULIANO ANTUNES CINTRA ROSA",
       "LEONARDO GONZAGA SILVA",
       "LEONARDO SAID DA COSTA",
       "LUCAS AOUN MONTEVECHI",
       "LUCAS A'VILA SILVA",
       "LUCAS BARROS SCIANNI MORAIS",
       "LUCAS BORGES TEIXEIRA",
       "LUCAS EDUARDO VITAL VINCI",
       "LUCAS VINICIUS DE SOUZA",
       "MARCELO FELIPE VAZ SANTOS",
       "MARCELO HENRIQUE ROCHA",
       "MARCOS VINICIUS LOPES CORTASSO",
       "MARIA EDUARDA PEREIRA AIRES",
       "MATEUS RIBEIRO DOS SANTOS",
       "MATHEUS DE ARAUJO LINO",
       "MATHEUS VINÍCIUS DE OLIVEIRA RIBOLI",
       "MAURICIO JORNADA BASTOS",
       "MAX WILLIAN MARCELINO DA SILVA",
       "OTAVIO KOROSI CASARIN",
       "PEDRO PAULO DE FREITAS JUNIOR",
       "RAFAEL ALEXANDRE SANTOS SILVA",
       "RAFAEL CAMARGOS SOUZA",
       "RENAN RODRIGUES BIZARRI",
       "REUDER MARCOS MOURA SANTANA",
       "RODRIGO KIYOSHI YAMASHIRO",
       "TARIK VIEIRA MOUALLEM",
       "UDO DE LIMA ANDRADE",
       "VICTOR RANZANI TISEO",
       "VINICIUS BARROS MOURA",
       "WELLINGTON RIBEIRO DOS SANTOS",
       "WENDEL AUGUSTO CHERCHIGLIA",
       "YOHAN MASSARU TAIRA",
       "YURI HENRIQUE DE ALMEIDA MUNIZ"
       };

  // Lista de Numeros de Matricula
  int listaMatriculas[MAX] = {
    24962, 2016017960, 2016002636, 2016015231, 2016008596, 33901, 18690, 25646, 2016002135, 2016016300, 2016010208, 2016016462, 2016006125, 2016005404, 34247, 2016003750, 2016003956, 2016001002, 31022, 2016013729, 2016008003, 34091, 2016011321, 35272, 34948, 2016014744, 2016009252, 2016011214, 34589, 2016017058, 2016004588, 2016003535, 2016008110, 34049, 2016014771, 2016006760, 27051, 2016000909, 2016000186, 28263, 2016015124, 2016002823, 2016012875, 2016004873, 2016017334, 2016000014, 35132, 34923, 2016009109, 24034, 31086, 35177, 2016002064, 34261, 2016001540, 34259, 2016016337, 2016000373, 24528, 2016010440, 2016002494, 35291, 2016010656, 34197, 2016012131, 2016006896, 2016010253, 2016001405, 26588, 34501, 27190, 34260, 33528, 34219, 2016011770
        };

  //insere todos os alunos na tabela hash
  for(i = 0; i < MAX; i++){
    novo.matricula = listaMatriculas[i];
    strcpy(novo.nome, listaNomes[i]);
    inserirElementoTabHash(novo);

    imprimeVetor();
    printf("\n-------------");
    printf("\nTecle ENTER para inserir o proximo...");
    getch();
    system("cls");
  }//end for

  //realizando buscas
  printf("Buscando Aluno ...\n\n");

  imprimeVetor();
  while(1){
     printf("\n-------------");
     printf("\nInforme uma matricula para busca: ");
     scanf("%d", &matricula);
     system("cls");

     buscaAluno(matricula);
     imprimeVetor();
  }//end while
  return 0;
}//end main()
