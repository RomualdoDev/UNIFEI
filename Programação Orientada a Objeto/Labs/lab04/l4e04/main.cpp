#include <iostream>
#include "vetor.h"
using namespace std;

int main(){
    int indice;
    cout<<"Digite o tamanho do vetor:"<<endl;
    cin>>indice;
    Cvetor v1;
    v1.set_indice(indice);
    cout<<"Digite os numeros: "<<endl;
    cin>>v1;
    cout<<"Digite o tamanho do vetor:"<<endl;
    cin>>indice;
    Cvetor v2;
    v2.set_indice(indice);
    cout<<"Digite os numeros: "<<endl;
    cin>>v2;
    if(v1>v2){
        cout<<"Vetor 1 e maior que vetor 2."<<endl;
    }
    if(v1<v2){
        cout<<"Vetor 1 e menor que vetor 2."<<endl;
    }
    if(v1==v2){
        cout<<"Vetor 1 e igual ao vetor 2."<<endl;
    }
    if(v1!=v2){
        cout<<"Vetor 1 e diferente do vetor 2."<<endl;
    }
    if(v1>=v2){
        cout<<"Vetor 1 e maior ou igual que o vetor 2. "<<endl;
    }
    if(v1<=v2){
        cout<<"Vetor 1 e menor ou igual que o vetor 2. "<<endl;
    }
}
