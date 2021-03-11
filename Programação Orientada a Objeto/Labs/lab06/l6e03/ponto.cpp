#include "ponto.h"
#include <iostream>

Ponto::Ponto(){
    x = 0;
    y = 0;
}

Ponto::Ponto(int cx, int cy):x{cx}, y{cy}{}

istream& operator>>(istream& in, Ponto& p){
    cout<<"Entre com as coordenadas: "<<endl;
    in>>p.x>>p.y;
    return in;
}

ostream& operator<<(ostream& out, const Ponto& p){
    out<<"Coordenadas: ("<<p.x<<","<<p.y<<")"<<endl;
    return out;
}

void Ponto::set_x(int cx){
    x = cx;
}

void Ponto::set_y(int cy){
    y = cy;
}

int Ponto::get_x(int cx){
    return x;
}

int Ponto::get_y(int cy){
    return y;
}
