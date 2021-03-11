// Fig. 10.8: fig10_08.cpp
// Date class test program.
#include <iostream>
#include "Date.h" // Date class definition
using namespace std;

int main() {
   Date d1;
   Date d2{28 , 2 , 2016};
   Date d3;
    cout<<"Digite a primeira data(ex: 2 4 2010): "<<endl;
    cin>>d1;
    cout<<"Digite a segunda data(ex: 2 4 2010): "<<endl;
    cin>>d3;
    cout << "Primeira data e: " << d1 << "\nSegunda data e: " << d2;
    cout << "\n\nPrimeira data +=7 e: " << (d1 += 7);

    cout << "\n\n  Segunda data e: " << d2;
    cout << "\n++Segunda data e: " << ++d2 << " (ano bissexto)";

    cout << "\n\nOperador prefixado:\n"
        << "  Terceira data e: " << d3 << endl;
    cout << "++Terceira data e: " << ++d3 << endl;
    cout << "  Terceira data e: " << d3;

    cout << "\n\nOperador pos fixado:\n"
        << "  Terceira data e: " << d3 << endl;
    cout <<"  Terceira data ++ e: " << d3++ << endl;
    cout << "  Terceira data e: " << d3 << endl;
}



