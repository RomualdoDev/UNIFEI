#include <iostream>
#include "longo.h"

using namespace std;

int main()
{
    Longo n1;
    Longo n2;
    cout << "Digite um numero de ate 30 digitos: ";
    cin >> n1;
    cout << "Digite outro numero de ate 30 digitos: ";
    cin >> n2;
    cout<<endl;
    cout << n1 <<" + "<< n2 <<" = ";
    Longo resposta = n1 + n2;
    cout<<resposta<<endl;
    cout << n1 <<" - "<< n2 <<" = ";
    resposta = n1 - n2;
    cout<<resposta<<endl;
    if(n1>n2){
        cout<<"Primeiro numero e maior que o segundo"<<endl;
    }
    if(n1<n2){
        cout<<"Primeiro numero e menor que o segundo"<<endl;
    }
    if(n1>=n2){
        cout<<"Primeiro numero e maior ou igual ao segundo"<<endl;
    }
    if(n1<=n2){
        cout<<"Primeiro numero e menor ou igual ao segundo"<<endl;
    }
    if(n1==n2){
        cout<<"Os dois numeros sao iguais"<<endl;
    }
    if(n1!=n2){
        cout<<"Os dois numeros sao diferentes"<<endl;
    }
    return 0;
}
