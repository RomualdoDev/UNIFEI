#ifndef PONTO_H
#define PONTO_H

#include <iostream>
#include <string>

using namespace std;

class ponto
{
    public:
        ponto(): x{0},y{0} {}
        virtual ~ponto() {}
        ponto& operator++ ();
        ponto operator++ (int);
        ponto& operator-- ();
        ponto operator-- (int);
        friend ostream& operator<< (ostream&, const ponto&);
        friend istream& operator>> (istream&, ponto&);
    protected:
    int x,y;
};

#endif // PONTO_H
