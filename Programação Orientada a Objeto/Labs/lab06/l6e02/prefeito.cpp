#include "prefeito.h"
#include "governador.h"
#include "presidente.h"
#include "politico.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
Prefeito::Prefeito(string n, string partido, int id, string p, string est, string cid)
        : Governador{n, partido, id, p, est}{
    cidade = cid;
    cout<<"Construindo prefeito..."<<endl;
}

void Prefeito::imprime(){
    Governador::imprime();
    cout<<"Cidade: "<<cidade<<endl;
}
