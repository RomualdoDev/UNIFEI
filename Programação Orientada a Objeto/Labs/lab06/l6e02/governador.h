#ifndef GOVERNADOR_H_INCLUDED
#define GOVERNADOR_H_INCLUDED
#include "politico.h"
#include "presidente.h"

class Governador : public Presidente{
    protected:
        string estado;
    public:
        Governador(string, string, int, string, string);
        ~Governador(){}
        void imprime();
};


#endif // GOVERNADOR_H_INCLUDED
