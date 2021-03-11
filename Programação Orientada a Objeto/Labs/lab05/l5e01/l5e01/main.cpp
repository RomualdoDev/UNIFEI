#include <iostream>
#include "vetor.h"
using namespace std;

int main(){
    int indice;
    Cvetor res;
    cout<<"Digite o grau do primeiro polinomio:"<<endl;
    cin>>indice;
    Cvetor v1;
    v1.set_grau(indice+1);
    cin>>v1;
    cout<<"Digite o grau do segundo polinomio:"<<endl;
    cin>>indice;
    Cvetor v2;
    v2.set_grau(indice+1);
    cin>>v2;
    cout<<"Soma dos polinomios: "<<endl;
    res = (v1 + v2);
    cout<<res<<endl;
    cout<<"Subtracao dos polinomios: "<<endl;
    res = (v1 - v2);
    cout<<res<<endl;
    return 0;
}
