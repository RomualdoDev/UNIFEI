#ifndef PREFEITO_H
#define PREFEITO_H
#include "politico.h"
#include "presidente.h"
#include "governador.h"

class Prefeito : public Governador{
    protected:
        string cidade;
    public:
        Prefeito(string, string, int, string, string, string);
        ~Prefeito(){}
        void imprime();
};


#endif // PREFEITO_H_INCLUDED
