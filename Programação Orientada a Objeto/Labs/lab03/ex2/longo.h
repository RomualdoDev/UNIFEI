#ifndef LONGO_H
#define LONGO_H
using namespace std;
class Longo
{
public:
    Longo(char x[30]);
    ~Longo();
    Longo operator+(Longo);
    Longo operator-(Longo);
    void print();
private:
    int v[30];
};


#endif // LONGO_H_INCLUDED
