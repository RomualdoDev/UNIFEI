#ifndef COMPLEXO_H
#define COMPLEXO_H


class Complexo
{
public:
    Complexo operator+(Complexo);
    Complexo operator-(Complexo);
    Complexo operator*(Complexo);
    Complexo operator/(Complexo);
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
