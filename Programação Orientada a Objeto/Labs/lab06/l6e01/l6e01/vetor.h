#ifndef VETOR_H
#define VETOR_H
#include <iostream>
#include <stdlib.h>
using namespace std;
class Cvetor{
    private:
        double *m_vet;
        int m_tam;
    public:
        Cvetor(int = 10);
        Cvetor(const Cvetor&);
        ~Cvetor(){delete[]m_vet;}
        double& operator[](int);
        friend ostream& operator<<(ostream& output,const Cvetor& v);
        friend istream& operator>>(istream& in, Cvetor& v);
        void set_grau(int);
        Cvetor& operator=(const Cvetor&);
        bool operator>(Cvetor&);
        double derivada(double);
        double f_ponto(double);
        double cal_apro(double);
};

#endif // VETOR_H
