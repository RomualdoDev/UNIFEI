#ifndef POLITICO_H_INCLUDED
#define POLITICO_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;
class Politico{
    protected:
        string nome, sigla_part;
        int idade;
    public:
        Politico(string, string, int);
        ~Politico(){}
        void imprime();
};


#endif // POLITICO_H_INCLUDED
