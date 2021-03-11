#include "complexo.h"
#include <iostream>
#include <cmath>

using namespace std;

int Complexo::cont = 0;

Complexo::Complexo()
{
    re =0;
    im =0;
    cont++;
}

Complexo::Complexo(double x, double y)
{
    re=x;
    im=y;
    cont++;
}

Complexo::Complexo(const Complexo&c) {
    re=c.re;
    im=c.im;
    cont++;
}

Complexo::~Complexo()
{
    cont--;
}

Complexo Complexo::operator+ (Complexo x)
{
    Complexo d;
    d.re = re+x.get_real();
    d.im = im+x.get_imaginario();
    return d;
}

Complexo Complexo::operator- (Complexo x)
{
    Complexo d;
    d.re = re-x.get_real();
    d.im = im-x.get_imaginario();
    return d;
}

Complexo Complexo::operator* (Complexo x)
{
    Complexo d;
    double mod = this->modulo(), ang = atan(im/re);
    ang += atan(x.get_imaginario()/x.get_real());
    mod = mod*x.modulo();
    d.re = mod*cos(ang);
    d.im = mod*sin(ang);
    return d;
}

Complexo Complexo::operator/ (Complexo x)
{
    Complexo d;
    double mod = this->modulo(), ang = atan(im/re);
    ang -= atan(x.get_imaginario()/x.get_real());
    mod = mod/x.modulo();
    d.re = mod*cos(ang);
    d.im = mod*sin(ang);
    return d;
}

double Complexo::modulo () {
    return (sqrt((re*re)+(im*im)));
}

void Complexo::print ()
{
    if (im>=0)
    {
        cout << re << " + " << im << "i" << endl;
    }
    else
    {
        cout << re << " - " << abs(im) << "i" << endl;
    }
}
