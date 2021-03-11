#ifndef LONGO_H
#define LONGO_H
#include <iostream>
using namespace std;
class Longo
{
public:
    int v[30];
    Longo();
    Longo(char x[30]);
    ~Longo();
    friend ostream& operator<<(ostream&, const Longo&);
    friend istream& operator>>(istream&, Longo&);
    Longo operator+(Longo);
    Longo operator-(Longo);
    bool operator>(Longo);
    bool operator<(Longo);
    bool operator<=(Longo);
    bool operator>=(Longo);
    bool operator==(Longo);
    bool operator!=(Longo);
};


#endif // LONGO_H_INCLUDED
