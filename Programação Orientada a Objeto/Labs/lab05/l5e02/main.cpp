#include <iostream>
#include "ponto.h"

using namespace std;

int main()
{
    ponto a,b;
    cout << "Digite a primeira coordenada(x y): ";
    cin >> a;
    cout << "Digite a segunda coordenada(x y): ";
    cin >> b;
    cout << "|----------------|"<<endl;
    cout << "|-----Ponto1-----|"<<endl;
    cout << "|----------------|"<<endl;
    cout << "++a: " << ++a << endl;
    cout << "a: " << a << endl;
    cout << "a++: " << a++ << endl;
    cout << "a: " << a << endl;
    cout << "--a: " << --a << endl;
    cout << "a: " << a << endl;
    cout << "a--: " << a-- << endl;
    cout << "a: " << a << endl;
    cout << "|----------------|"<<endl;
    cout << "|-----Ponto2-----|"<<endl;
    cout << "|----------------|"<<endl;
    cout << "++b; " << ++b << endl;
    cout << "b: " << b << endl;
    cout << "b++: " << b++ << endl;
    cout << "b: " << b << endl;
    cout << "--b: " << --b << endl;
    cout << "b: " << b << endl;
    cout << "b--: " << b-- << endl;
    cout << "b: " << b << endl;
    return 0;
}
