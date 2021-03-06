#ifndef ID_CFRACAO
#define ID_CFRACAO
#include <iostream>
#include <string.h>
using namespace std;

class CFracao
{
protected:
    int m_numerador;
    int m_denominador;

    // responde ao receptor com o m�nimo denominador comun
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
    //m�todos de acesso
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
    //m�todos aritim�ticos
    //
    // retorna uma nova Fracao que � a soma do receptor com _F
    CFracao operator+(CFracao& _F);
    // retorna uma nova Fracao que � a subtra��o do receptor com _F
    CFracao operator-(CFracao& _F);
    // retorna uma nova Fracao que o produto do receptor e _F
    CFracao operator*(CFracao& _F);
    // retorna uma nova Fracao que o quociente do receptor e _F
    CFracao operator/(CFracao& _F);

    //
    //m�todos de copara��o
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
    //m�todos de convers�o
    //

// devolve o valor da fra��o como float
    operator float(void);

    //
    //m�todos de impress�o
    //
    // mostrar o receptor no formato m_numerador/m_denominador

    void set_num(int);
    void set_den(int);

    friend ostream& operator<<(ostream&, const CFracao&);
    friend istream& operator>>(istream&, CFracao&);


};

#endif // ID_CFRACAO
