#ifndef CILINDRO_H
#define CILINDRO_H
#include <iostream>
#include "circulo.h"
using namespace std;
class Cilindro: public Circulo{
    public:
        float altura;
        Cilindro();
        Cilindro(int, int, int, float);
        ~Cilindro(){}
        float volume();
        void set_altura(float);
        friend istream& operator>>(istream&, Cilindro&);
        friend ostream& operator<<(ostream&, const Cilindro&);
};


#endif // CILINDRO_H
