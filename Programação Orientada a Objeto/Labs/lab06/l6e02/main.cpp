#include <iostream>
#include "politico.h"
#include "presidente.h"
#include "governador.h"
#include "prefeito.h"
using namespace std;

int main(){
    string nome, partido, pais, estado, cidade;
    int idade;
    cout<<"Digite o nome:"<<endl;
    getline(cin,nome);
    cout<<"Digite o partido"<<endl;
    getline(cin,partido);
    cout<<"Digite a idade:"<<endl;
    cin>>idade;
    getchar();
    cout<<"Digite o pais: "<<endl;
    getline(cin,pais);
    cout<<"Digite o estado: "<<endl;
    getline(cin,estado);
    cout<<"Digite a cidade: "<<endl;
    getline(cin,cidade);
    Politico p(nome, partido,idade);
    Presidente pre(nome, partido,idade,pais);
    Governador g(nome, partido,idade,pais,estado);
    Prefeito pr(nome, partido,idade,pais,estado,cidade);
    cout<<endl;
    cout<<"------Politico------"<<endl;
    p.imprime();
    cout<<endl;
    cout<<"-----Presidente-----"<<endl;
    pre.imprime();
    cout<<endl;
    cout<<"-----Governador-----"<<endl;
    g.imprime();
    cout<<endl;
    cout<<"------Prefeito------"<<endl;
    pr.imprime();
}
