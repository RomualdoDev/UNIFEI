#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include "ponto.h"
using namespace std;
 class Circulo: public Ponto{
    public:
        int raio;
        Circulo();
        Circulo(int, int , int);
        ~Circulo(){}
        float area();
        void set_raio(int);
        friend istream& operator>>(istream&, Circulo&);
        friend ostream& operator<<(ostream&, const Circulo&);
 };


#endif // CIRCULO_H
