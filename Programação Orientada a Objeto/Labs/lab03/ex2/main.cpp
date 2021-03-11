#include <iostream>
#include "longo.h"

using namespace std;

int main()
{
    char x[30],y[30];
    cout << "Digite um numero de ate 30 digitos: ";
    cin >> x;
    Longo n1(x);
    cout << "Digite outro numero de ate 30 digitos: ";
    cin >> y;
    cout<<endl;
    cout << "Primeiro numero: ";
    n1.print();
    cout << "Segundo numero: ";
    Longo n2(y);
    n2.print();
    cout << x <<" + "<< y <<" = ";
    Longo resposta = n1 + n2;
    resposta.print();
    cout << x <<" - "<< y <<" = ";
    resposta = n1 - n2;
    resposta.print();
    return 0;
}
