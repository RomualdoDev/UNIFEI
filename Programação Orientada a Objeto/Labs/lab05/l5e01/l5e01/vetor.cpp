#include "vetor.h"
#include <iostream>
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

Cvetor Cvetor::operator+(Cvetor& v){
    int i,j = 0,pulo=0;
    Cvetor result;
    if(m_tam>v.m_tam){
        result.set_grau(m_tam);
        result.m_vet = new double[m_tam];
        pulo = (m_tam-v.m_tam);
        for(i=0;i<pulo;i++){
            result[i] = 0;
        }
        j=0;
        while(j<v.m_tam){
            for(i=pulo;i<m_tam;i++){
                result.m_vet[i] = v.m_vet[j];
                j++;
            }
        }
        for(i=0;i<m_tam;i++){
            result[i] = m_vet[i] + result[i];
        }
    }
    if(v.m_tam>m_tam){
        result.set_grau(v.m_tam);
        result.m_vet = new double[v.m_tam];
        pulo = (v.m_tam-m_tam);
        for(i=0;i<pulo;i++){
            result[i] = 0;
        }
        j=0;
        while(j<m_tam){
            for(i=pulo;i<v.m_tam;i++){
                result.m_vet[i] = m_vet[j];
                j++;
            }
        }
        for(i=0;i<v.m_tam;i++){
            result[i] = result[i] + v[i];
        }
    }
    if(m_tam==v.m_tam){
        result.set_grau(m_tam);
        result.m_vet = new double[m_tam];
        for(i=0;i<m_tam;i++){
            result[i] = m_vet[i] + v[i];
        }
    }
    return result;
}

Cvetor Cvetor::operator-(Cvetor& v){
    int i,j = 0,pulo;
    Cvetor result;
    if(m_tam>v.m_tam){
        result.set_grau(m_tam);
        result.m_vet = new double[m_tam];
        pulo = (m_tam-v.m_tam);
        for(i=0;i<pulo;i++){
            result[i] = 0;
        }
        j=0;
        while(j<v.m_tam){
            for(i=pulo;i<m_tam;i++){
                result[i] = v.m_vet[j];
                j++;
            }
        }
        for(i=0;i<m_tam;i++){
            result.m_vet[i] = result.m_vet[i] - m_vet[i];
        }
    }
    if(v.m_tam>m_tam){
        result.set_grau(v.m_tam);
        result.m_vet = new double[v.m_tam];
        pulo = (v.m_tam-m_tam);
        for(i=0;i<pulo;i++){
            result[i] = 0;
        }
        j=0;
        while(j<m_tam){
            for(i=pulo;i<v.m_tam;i++){
                result.m_vet[i] = m_vet[j];
                j++;
            }
        }
        for(i=0;i<v.m_tam;i++){
            result[i] = result[i] - v[i];
        }
    }
    if(m_tam==v.m_tam){
        result.set_grau(m_tam);
        result.m_vet = new double[m_tam];
        for(i=0;i<m_tam;i++){
            result[i] = m_vet[i] - v[i];
        }
    }
    return result;
}

bool Cvetor::operator>(Cvetor& v){
    if(m_tam > v.m_tam){return true;}
    return false;
}


Cvetor& Cvetor::operator=(const Cvetor& v){
    int i;
    m_tam = v.m_tam;
    m_vet = new double[m_tam];
    for(i=0;i<m_tam;i++){
        m_vet[i] = v.m_vet[i];
    }
    return *this;
}
//bool Cvetor::operator<(Cvetor& v){
//    if(m_tam < v.m_tam){return true;}
//    return false;
//}
//
//bool Cvetor::operator==(Cvetor& v){
//    if(m_tam == v.m_tam){return true;}
//    return false;
//}
//
//bool Cvetor::operator!=(Cvetor& v){
//    if(m_tam < v.m_tam){return true;}
//    return false;
//}
//
//bool Cvetor::operator>=(Cvetor& v){
//    if(m_tam >= v.m_tam){return true;}
//    return false;
//}
//
//bool Cvetor::operator<=(Cvetor& v){
//    if(m_tam <= v.m_tam){return true;}
//    return false;
//}
