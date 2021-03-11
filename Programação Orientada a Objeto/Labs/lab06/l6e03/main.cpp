#include <iostream>
#include "cilindro.h"
#include "circulo.h"
#include "ponto.h"
using namespace std;

int main(){
    int op;
    cout<<"|--Escolha o objeto que deseja criar--|"<<endl;
    cout<<"|--1.Ponto----------------------------|"<<endl;
    cout<<"|--2.Circulo--------------------------|"<<endl;
    cout<<"|--3.Cilindro-------------------------|"<<endl;
    cout<<">";
    cin>>op;
    switch(op){
        case 1:{
            Ponto p;
            cin>>p;
            cout<<p<<endl;
            break;
        }
        case 2:{
            Circulo c;
            cin>>c;
            cout<<c<<endl;
            cout<<"Area: "<<c.area()<<endl;
            break;
        }
        case 3:{
            Cilindro ci;
            cin>>ci;
            cout<<ci<<endl;
            cout<<"Volume: "<<ci.volume()<<endl;
            break;
        }
        default:
            cout<<"Digite uma opcao valida!"<<endl;
            break;
    }
}
