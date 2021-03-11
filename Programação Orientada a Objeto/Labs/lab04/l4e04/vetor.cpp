#include "vetor.h"
#include <iostream>
using namespace std;

Cvetor::Cvetor(int t){
    int i;
    if(t>0){
        m_tam = t;
    }
    m_vet = new int[m_tam];
    for(i=0;i<m_tam;i++){
        m_vet[i] = 0;
    }

}

Cvetor::Cvetor(const Cvetor& v){
    int i;
    for(i=0;i<m_tam;i++){
        m_vet[i] = v.m_vet[i];
    }
}


void Cvetor::set_indice(int tam){
    m_tam = tam;
}

int& Cvetor::operator[](int indice){
    if(indice<0 || indice>=m_tam)
        return m_vet[0];
    return m_vet[indice];
}

ostream& operator<<(ostream& output, Cvetor& v){
    int i;
    for(i=0;i<v.m_tam;i++){
        cout<<v[i]<<endl;
    }
}

istream& operator>>(istream& in, Cvetor& v){
    int i;
    for(i=0;i<v.m_tam;i++){
        cin>>v[i];
    }
}


bool Cvetor::operator>(Cvetor& v){
    if(m_tam > v.m_tam){return true;}
    return false;
}

bool Cvetor::operator<(Cvetor& v){
    if(m_tam < v.m_tam){return true;}
    return false;
}

bool Cvetor::operator==(Cvetor& v){
    if(m_tam == v.m_tam){return true;}
    return false;
}

bool Cvetor::operator!=(Cvetor& v){
    if(m_tam < v.m_tam){return true;}
    return false;
}

bool Cvetor::operator>=(Cvetor& v){
    if(m_tam >= v.m_tam){return true;}
    return false;
}

bool Cvetor::operator<=(Cvetor& v){
    if(m_tam <= v.m_tam){return true;}
    return false;
}
