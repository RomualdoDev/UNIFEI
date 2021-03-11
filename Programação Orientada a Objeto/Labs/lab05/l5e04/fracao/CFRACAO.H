#ifndef ID_CFRACAO
#define ID_CFRACAO
#include <iostream>
#include <string.h>
#include "complexo.h"
using namespace std;

class CFracao
{
protected:
    int m_numerador;
    int m_denominador;

    // responde ao receptor com o mínimo denominador comun
    CFracao Reduzida(void);

public:
    // Construtor sem parametros inline
    CFracao(void)
    {
        m_numerador = 1;
        m_denominador = 1;
    }
    CFracao(int Num, int Denom) : m_numerador(Num),
        m_denominador(Denom) { };
    CFracao( const CFracao& f) // Construtor de copia
    {
        m_numerador = f.m_numerador;
        m_denominador = f.m_denominador;
    }
    ~CFracao(void) { };		// Destrutor

    //
    //métodos de acesso
    //
    int getNumerador(void)
    {
        return m_numerador;
    }
    int getDenominador(void)
    {
        return m_denominador;
    }

    //
    //métodos aritiméticos
    //
    // retorna uma nova Fracao que é a soma do receptor com _F
    CFracao operator+(CFracao& _F);
    // retorna uma nova Fracao que é a subtração do receptor com _F
    CFracao operator-(CFracao& _F);
    // retorna uma nova Fracao que o produto do receptor e _F
    CFracao operator*(CFracao& _F);
    // retorna uma nova Fracao que o quociente do receptor e _F
    CFracao operator/(CFracao& _F);

    //
    //métodos de coparação
    //
    // devolve verdadeiro se receptor menor que _Fracao
    bool operator<(CFracao _Fracao);
    // devolve verdadeiro se receptor maior que _Fracao
    bool operator>(CFracao _Fracao);
    // devolve verdadeiro se receptor igual a _Fracao
    bool operator==(CFracao _Fracao);

    bool operator!=(CFracao _Fracao);

    bool operator>=(CFracao _Fracao);

    bool operator<=(CFracao _Fracao);
    //
    //métodos de conversão
    //

// devolve o valor da fração como float
    operator float(void);
    operator int(void);
    operator double(void);
    operator class Complexo();
    //
    //métodos de impressão
    //
    // mostrar o receptor no formato m_numerador/m_denominador

    void set_num(int);
    void set_den(int);

    friend ostream& operator<<(ostream&, const CFracao&);
    friend istream& operator>>(istream&, CFracao&);


};

#endif // ID_CFRACAO
