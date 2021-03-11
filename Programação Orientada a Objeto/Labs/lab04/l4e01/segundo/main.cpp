#include <iostream>
#include "segundo.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    Segundo e;
    int a,b,c;
    cout<<"Digite o coeficiente de segundo grau:"<<endl;
    cin>>a;
    cout<<"Digite o coeficiente de primeiro grau:"<<endl;
    cin>>b;
    cout<<"Digite o coeficiente constante:"<<endl;
    cin>>c;
    e.set_valores(a,b,c);
    system("cls");
    e.calcula_delta();

}
