#include <iostream>
#include "complexo.h"
#include <cstdlib>

using namespace std;

int main()
{
    double x,y;
    Complexo e,c,d;
    cout<<"Primeiro Numero"<<endl;
    cout << "Digite a parte real e a parte imaginaria: ";
    cin >>c;
    cout<<"Segundo Numero"<<endl;
    cout << "Digite a parte real e a parte imaginaria: ";
    cin >> d;
    system("cls");
    cout << "Primeiro numero complexo: ";
    cout<<c<<endl;
    cout << "Segundo numero complexo: ";
    cout<<d<<endl;
    cout << "Soma: ";
    e=c+d;
    cout<<e<<endl;
    cout << "Subtracao de 1 por 2: ";
    e=c-d;
    cout<<e<<endl;
    cout << "Subtracao de 2 por 1: ";
    e=d-c;
    cout<<e<<endl;
    cout << "Multiplicacao: ";
    e=c*d;
    cout<<e<<endl;
    cout << "Divisao de 1 por 2: ";
    e=c/d;
    cout<<e<<endl;
    cout << "Divisao de 2 por 1: ";
    e=d/c;
    cout<<e<<endl;
    cout << "Modulo de 1: " << c.modulo()<< endl;
    cout << "Modulo de 2: " << d.modulo()<< endl;
    if(c>d){
        cout<<c<<" e maior que "<<d<<endl;
    }
    if(c<d){
        cout<<c<<" e menor que "<<d<<endl;
    }
    if(c==d){
        cout<<c<<" e igual a "<<d<<endl;
    }
    if(c!=d){
        cout<<c<<" e diferente de "<<d<<endl;
    }
    if(c>=d){
        cout<<c<<" e maior ou igual a "<<d<<endl;
    }
    if(c<=d){
        cout<<c<<" e menor ou igual a "<<d<<endl;
    }
    return 0;
}
