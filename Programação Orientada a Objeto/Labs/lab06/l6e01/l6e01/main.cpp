#include <iostream>
#include "vetor.h"
using namespace std;

int main(){
    int indice;
    double apro = 0;
    Cvetor res;
    cout<<"Digite o grau do polinomio:"<<endl;
    cin>>indice;
    Cvetor v1;
    v1.set_grau(indice+1);
    cin>>v1;
    cout<<"Polinomio a ter sua raiz aproximada: "<<endl;
    cout<<v1<<endl;
    cout<<"Digite a aproximacao: "<<endl;
    cin>>apro;
    apro = v1.cal_apro(apro);
    cout<<apro<<endl;
    return 0;
}
