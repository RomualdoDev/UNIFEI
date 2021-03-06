#include "CFracao.h"
#include <iostream>
#include "complexo.h"
using namespace std;

//
// M�todos Protegidos da classe CFracao
//
CFracao CFracao::Reduzida(void)
{
    int gcd = 1;
    int minimo = m_numerador;
    if (m_numerador > m_denominador)
        minimo = m_denominador;
    for(int i = 1; i <= minimo; i++)
    {
        if ((m_numerador%i == 0) && (m_denominador%i == 0))
            gcd = i;
    }
    m_numerador /= gcd;
    m_denominador /= gcd;
    return (*this);
}

//
// M�todos Aritm�ticos da classe CFracao
//
// retorna uma nova Fracao que � a soma do receptor com _Fracao
CFracao CFracao::operator+(CFracao& _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_denominador +
                 m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
    return temp.Reduzida();
}

// retorna uma nova Fracao que � a subtra��o do receptor com _Fracao
CFracao CFracao::operator-(CFracao& _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_denominador -
                 m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
    return temp.Reduzida();
}

// retorna uma nova Fracao que o produto do receptor e _Fracao
CFracao CFracao::operator*(CFracao& _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
    return temp.Reduzida();
}

// retorna uma nova Fracao que o quociente do receptor e _Fracao
CFracao CFracao::operator/(CFracao& _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_denominador,
                 m_denominador*_Fracao.m_numerador );
    return temp.Reduzida();
}

//
// M�todos de compara��o da classe CFracao
//
// devolve verdadeiro se receptor menor que _Fracao
bool CFracao::operator<(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador <
            m_denominador*_Fracao.m_numerador );
}

// devolve verdadeiro se receptor maior que _Fracao
bool CFracao::operator>(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador >
            m_denominador*_Fracao.m_numerador );
}

// devolve verdadeiro se receptor igual a _Fracao
bool CFracao::operator==(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador ==
            m_denominador*_Fracao.m_numerador );
}

//
// M�todos de convers�o
//
// devolve o valor da fra��o como float
CFracao::operator float(void)
{
    return ((float)m_numerador/(float)m_denominador);
}


CFracao::operator int(void)
{
    return ((int)m_numerador/(int)m_denominador);
}

CFracao::operator double(void)
{
    return ((double)m_numerador/(double)m_denominador);
}
//
// M�todos de impress�o
//
// mostrar o receptor no formato m_numerador/m_denominador


ostream& operator<<(ostream& output, const CFracao& c)
{
	output << c.m_numerador << "/" << c.m_denominador;
	return output;
}

istream& operator>>(istream& in, CFracao& c) {
	in >> c.m_numerador >> c.m_denominador;
	return in;
}

    bool CFracao::operator!=(CFracao _Fracao){
        return (m_numerador*_Fracao.m_denominador !=
            m_denominador*_Fracao.m_numerador );
    }

    bool CFracao::operator>=(CFracao _Fracao){
        return (m_numerador*_Fracao.m_denominador >=
            m_denominador*_Fracao.m_numerador );
    }

    bool CFracao::operator<=(CFracao _Fracao){
        return (m_numerador*_Fracao.m_denominador <=
            m_denominador*_Fracao.m_numerador );
    }


        CFracao::operator Complexo() {
            Complexo aux;
            aux.set_real(((double)m_numerador/(double)m_denominador));
            aux.set_imaginario(0);
            return aux;
        }
