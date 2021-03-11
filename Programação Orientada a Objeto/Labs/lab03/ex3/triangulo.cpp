#include "triangulo.h"
#include <iostream>
#include <math.h>
using namespace std;

Triangulo::Triangulo(){
    lado1 = 0;
    lado2 = 0;
    lado3 = 0;
    cout<<"Construindo.."<<endl;
}

Triangulo::Triangulo(int l1, int l2, int l3){
    lado1 = l1;
    lado2 = l2;
    lado3 = l3;
    cout<<"Construindo..."<<endl;
}

void Triangulo::set_lados(int lado1, int lado2, int lado3){
        this->lado1 = lado1;
        this->lado2 = lado2;
        this->lado3 = lado3;
}


void Triangulo::imprime_triangulo(){
    if(lado3>lado2 && lado2>lado1){
        if(((lado1*lado1)+(lado2*lado2))==(lado3*lado3)){
            cout<<"Dimensoes: "<<lado1<<" , "<<lado2<<" , "<<lado3<<endl;
        }
    }
}

