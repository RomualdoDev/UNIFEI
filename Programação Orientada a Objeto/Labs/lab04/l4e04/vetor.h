#ifndef VETOR_H
#define VETOR_H
#include <iostream>
#include <stdlib.h>
using namespace std;
class Cvetor{
    private:
        int *m_vet;
        int m_tam;
    public:
        Cvetor(int = 10);
        Cvetor(const Cvetor&);
        ~Cvetor(){delete[]m_vet;}
        Cvetor operator=(const Cvetor&);
        int& operator[](int);
        friend ostream& operator<<(ostream& output, Cvetor& v);
        friend istream& operator>>(istream& in, Cvetor& v);
        void set_indice(int);
        bool operator>(Cvetor&);
        bool operator<(Cvetor&);
        bool operator==(Cvetor&);
        bool operator!=(Cvetor&);
        bool operator>=(Cvetor&);
        bool operator<=(Cvetor&);

};

#endif // VETOR_H
