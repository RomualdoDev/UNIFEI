#include "presidente.h"
#include "politico.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
Presidente::Presidente(string n, string partido, int id, string p):Politico{n, partido, id}{
    pais = p;
    cout<<"Construindo presidente..."<<endl;
}

void Presidente::imprime(){
    Politico::imprime();
    cout<<"Pais: "<<pais<<endl;
}
