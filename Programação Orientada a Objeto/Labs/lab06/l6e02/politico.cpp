#include "politico.h"
#include <string.h>
using namespace std;
Politico::Politico(string n, string partido, int id){
    nome = n;
    sigla_part = partido;
    idade = id;
    cout<<"Construindo politico..."<<endl;
}

void Politico::imprime(){
    cout<<"Nome Completo: "<<nome<<endl;
    cout<<"Filiado ao partido: "<<sigla_part<<endl;
    cout<<"Tem "<<idade<<" anos"<<endl;
}
