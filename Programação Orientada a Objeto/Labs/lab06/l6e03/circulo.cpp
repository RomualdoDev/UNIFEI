#include "circulo.h"
#include "ponto.h"
#include <iostream>

Circulo::Circulo(){
    set_raio(0);
    set_x(0);
    set_y(0);
}

Circulo::Circulo(int cx, int cy,int r):Ponto(cx, cy),raio{r}{}

float Circulo::area(){
    return 3.14*raio;
}

void Circulo::set_raio(int r){
    raio = r;
}

istream& operator>>(istream& in, Circulo& c){
    cout<<"Entre com as coordenadas: "<<endl;
    in>>c.x>>c.y;
    cout<<"Ente com o raio: "<<endl;
    in>>c.raio;
    return in;
}

ostream& operator<<(ostream& out, const Circulo& c){
    out<<"Coordenadas: ("<<c.x<<","<<c.y<<")"<<endl;
    out<<"Raio: "<<c.raio<<endl;
    return out;
}

