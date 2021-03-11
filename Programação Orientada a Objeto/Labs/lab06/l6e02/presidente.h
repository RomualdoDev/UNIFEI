#ifndef PRESIDENTE_H_INCLUDED
#define PRESIDENTE_H_INCLUDED
#include "politico.h"
#include  <string.h>
class Presidente : public Politico{
    protected:
        string pais;
    public:
        Presidente(string, string, int, string);
        ~Presidente(){}
        void imprime();

};


#endif // PRESIDENTE_H_INCLUDED
