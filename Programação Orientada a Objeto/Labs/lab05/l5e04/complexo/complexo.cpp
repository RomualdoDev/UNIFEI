#include "complexo.h"
#include "CFracao.h"
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

ostream& operator<<(ostream& output, const Complexo& c)
{
	output << c.re << " + (" << c.im << ")i";
	return output;
}

istream& operator>>(istream& in, Complexo& c) {
	in >> c.re >> c.im;
	return in;
}


    bool Complexo::operator>(Complexo c){
        if(sqrt((re*re)+(im*im))>sqrt((c.re*c.re)+(c.im*c.im))) return true;
        return false;
    }

    bool Complexo::operator<(Complexo c){
        if(sqrt((re*re)+(im*im))<sqrt((c.re*c.re)+(c.im*c.im))) return true;
        return false;
    }

    bool Complexo::operator==(Complexo c){
        if(sqrt((re*re)+(im*im))==sqrt((c.re*c.re)+(c.im*c.im))) return true;
        return false;
    }

    bool Complexo::operator!=(Complexo c){
        if(sqrt((re*re)+(im*im))!=sqrt((c.re*c.re)+(c.im*c.im))) return true;
        return false;
    }

    bool Complexo::operator>=(Complexo c){
        if(sqrt((re*re)+(im*im))>=sqrt((c.re*c.re)+(c.im*c.im))) return true;
        return false;
    }

    bool Complexo::operator<=(Complexo c){
        if(sqrt((re*re)+(im*im))<=sqrt((c.re*c.re)+(c.im*c.im))) return true;
        return false;
    }

    Complexo::operator int(void){
        return ((int)sqrt((int)(re*re)+(int)(im*im)));
    }

    Complexo::operator float(void){
        return ((float)sqrt((float)(re*re)+(float)(im*im)));
    }

    Complexo::operator double(void){
        return ((double)sqrt((double)(re*re)+(double)(im*im)));
    }

    Complexo::operator CFracao() {
        CFracao aux;
        aux.set_num((int)((sqrt((int)re*(int)re+(int)im*(int)im))));
        aux.set_den(1);
        return aux;
    }


