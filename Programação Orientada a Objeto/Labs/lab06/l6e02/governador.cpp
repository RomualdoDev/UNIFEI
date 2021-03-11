#include "governador.h"
#include "presidente.h"
#include "politico.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
Governador::Governador(string n, string partido, int id, string p, string est)
            :Presidente{n, partido, id, p}{
    estado = est;
    cout<<"Construindo governador..."<<endl;
}

void Governador::imprime(){
    Presidente::imprime();
    cout<<"Estado: "<<estado<<endl;
}
