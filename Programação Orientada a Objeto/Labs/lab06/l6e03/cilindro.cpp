#include "cilindro.h"
#include "circulo.h"
#include "ponto.h"
#include <iostream>

Cilindro::Cilindro(){
    set_raio(0);
    set_x(0);
    set_y(0);
    set_altura(0);
}

Cilindro::Cilindro(int cx, int cy, int r, float alt):Circulo(cx, cy, r), altura{alt}{}

float Cilindro::volume(){
    return ((3.14*raio)*altura);
}

void Cilindro::set_altura(float alt){
    altura = alt;
}

istream& operator>>(istream& in, Cilindro& ci){
    cout<<"Entre com as coordenadas: "<<endl;
    in>>ci.x>>ci.y;
    cout<<"Ente com o raio: "<<endl;
    in>>ci.raio;
    cout<<"Ente com a altura: "<<endl;
    in>>ci.altura;
    return in;
}

ostream& operator<<(ostream& out, const Cilindro& ci){
    out<<"Coordenadas: ("<<ci.x<<","<<ci.y<<")"<<endl;
    out<<"Raio: "<<ci.raio<<endl;
    out<<"Altura: "<<ci.altura;
    return out;
}



