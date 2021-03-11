#ifndef PONTO_H
#define PONTO_H
#include <iostream>
using namespace std;
 class Ponto{
    public:
        int x, y;
        Ponto();
        Ponto(int, int);
        ~Ponto(){}
        void set_x(int);
        void set_y(int);
        int get_x(int cx);
        int get_y(int cy);
        friend istream& operator>>(istream&, Ponto&);
        friend ostream& operator<<(ostream&, const Ponto&);
};


#endif // PONTO_H
