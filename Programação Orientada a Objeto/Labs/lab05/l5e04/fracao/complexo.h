#ifndef COMPLEXO_H
#define COMPLEXO_H
#include <iostream>
using namespace std;

class Complexo
{
public:
    friend ostream& operator<<(ostream&, const Complexo&);
    friend istream& operator>>(istream&, Complexo&);
    Complexo operator+(Complexo);
    Complexo operator-(Complexo);
    Complexo operator*(Complexo);
    Complexo operator/(Complexo);
    operator int(void);
    operator float(void);
    operator double(void);
    operator class Complexo();
    bool operator>(Complexo);
    bool operator<(Complexo);
    bool operator==(Complexo);
    bool operator!=(Complexo);
    bool operator>=(Complexo);
    bool operator<=(Complexo);
    double modulo ();
    Complexo();
    Complexo(double x, double y);
    Complexo(const Complexo&);
    void set_real (double x)
    {
        re = x;
    }
    void set_imaginario (double x)
    {
        im = x;
    }
    double get_real()
    {
        return re;
    }
    double get_imaginario()
    {
        return im;
    }
    virtual ~Complexo();
    void print();
private:
    double re,im;
    static int cont;
};

#endif // COMPLEXO_H
