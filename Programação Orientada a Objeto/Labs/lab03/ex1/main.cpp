#include <iostream>
#include "complexo.h"
#include <cstdlib>

using namespace std;

int main()
{
    double x,y;
    Complexo e;
    cout<<"Primeiro Numero"<<endl;
    cout << "Digite a parte real: ";
    cin >> x;
    cout << "Digite a parte imaginaria: ";
    cin >> y;
    Complexo c(x,y);
    cout<<"Segundo Numero"<<endl;
    cout << "Digite a parte real: ";
    cin >> x;
    cout << "Digite a parte imaginaria: ";
    cin >> y;
    Complexo d(x,y);
    system("cls");
    cout << "Primeiro numero complexo: ";
    c.print();
    cout << "Segundo numero complexo: ";
    d.print();
    cout << "Soma: ";
    e=c+d;
    e.print();
    cout << "Subtracao de 1 por 2: ";
    e=c-d;
    e.print();
    cout << "Subtracao de 2 por 1: ";
    e=d-c;
    e.print();
    cout << "Multiplicacao: ";
    e=c*d;
    e.print();
    cout << "Divisao de 1 por 2: ";
    e=c/d;
    e.print();
    cout << "Divisao de 2 por 1: ";
    e=d/c;
    e.print();
    cout << "Modulo de 1: " << c.modulo() << endl;
    cout << "Modulo de 2: " << d.modulo() << endl;
    return 0;
}
