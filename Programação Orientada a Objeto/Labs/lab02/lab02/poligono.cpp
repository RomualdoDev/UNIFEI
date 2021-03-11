#include "poligono.h"
#include <iostream>
#include <cmath>
using namespace std;

Poligono::Poligono(int vlado, float vcomp){
    set_lado(vlado);
    set_comp(vcomp);
    lados = vlado;
    comprimento = vcomp;
    cout<< "Construindo..."<< endl;
}

void Poligono::set_lado(int lados){
    if(lados >= 3 && lados <= 10){
        this->lados = lados;
    }else{
        this->lados = 3;
    }
}

void Poligono::set_comp(float comprimento){
    this->comprimento = comprimento;
}

float Poligono::area(){
    float a;
    a = (0.25 * (lados*(comprimento * comprimento))*(cos(3.14/lados)/sin(3.14/lados)));
    return a;
}

float Poligono::perimetro(){
    return lados * comprimento;
}

void Poligono::nome(){
    switch(lados){
    case 3:
        cout<<"Triangulo"<<endl;
        break;
    case 4:
        cout<<"Quadrado"<<endl;
        break;
    case 5:
        cout<<"Pentagono"<<endl;
        break;
    case 6:
        cout<<"Hexagono"<<endl;
        break;
    case 7:
        cout<<"Heptagono"<<endl;
        break;
    case 8:
        cout<<"Octogono"<<endl;
        break;
    case 9:
        cout<<"Eneagono"<<endl;
        break;
    case 10:
        cout<<"Decagono"<<endl;
        break;
    default:
        cout<<"Poligono nao cadastrado"<<endl;
    }

}
