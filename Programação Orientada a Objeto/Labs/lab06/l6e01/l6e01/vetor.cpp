#include "vetor.h"
#include <iostream>
#include <cmath>
using namespace std;

Cvetor::Cvetor(int t){
    int i;
    if(t>0){
        m_tam = t;
    }
    m_vet = new double[m_tam];
    for(i=0;i<m_tam;i++){
        m_vet[i] = 0;
    }

}

Cvetor::Cvetor(const Cvetor& v){
    int i;
    m_tam = v.m_tam;
    m_vet = new double[v.m_tam];
    for(i=0;i<m_tam;i++){
        m_vet[i] = v.m_vet[i];
    }
}


void Cvetor::set_grau(int tam){
    m_tam = tam;
}

double& Cvetor::operator[](int grau){
    if(grau<0 || grau>=m_tam)
        return m_vet[0];
    return m_vet[grau];
}

ostream& operator<<(ostream& output,const Cvetor& v){
    int i,t = v.m_tam;
    for(i=0;i<v.m_tam;i++){
        if(i==(v.m_tam-1)){
            output<<v.m_vet[v.m_tam-1]<<" = 0";
        }else{
            output<<v.m_vet[i]<<"x^"<<"("<<t-1<<")"<<"+";
            t--;
        }
    }
    return output;
}

istream& operator>>(istream& in, Cvetor& v){
    int i,coef = v.m_tam;
    for(i=0;i<v.m_tam;i++){
        cout<<"Digite o coeficiente "<<coef-1<<endl;
        in>>v[i];
        coef--;
    }
    return in;
}


Cvetor& Cvetor::operator=(const Cvetor& v){
    int i;
    delete[]m_vet;
    m_tam = v.m_tam;
    m_vet = new double[m_tam];
    for(i=0;i<m_tam;i++){
        m_vet[i] = v.m_vet[i];
    }
    return *this;
}


double Cvetor::derivada(double x){
    Cvetor der;
    int i, t = m_tam-1, s = 0;
    double soma = 0;
    delete[]der.m_vet;
    der.set_grau(m_tam-1);
    der.m_vet = new double[m_tam-1];
    for(i=0;i<m_tam-1;i++){
        s = t-i;
        der[i] = m_vet[i] * (s);
    }
    for(i=0;i<m_tam-1;i++){
        soma+=(der[i]*pow(x,m_tam-1-i));
    }
    return soma;
}

double Cvetor::f_ponto(double x){
    double soma2;
    for(int i=0;i<m_tam;i++){
        soma2 += (m_vet[i]*pow(x,m_tam-1-i));
    }
    return soma2;
}

double Cvetor::cal_apro(double x){
    double ant=0,prox=x;
    for(int i=0;i<2000;i++){
        ant = prox;
        prox = ant - (f_ponto(ant)/derivada(ant));
    }
    return prox;

}

