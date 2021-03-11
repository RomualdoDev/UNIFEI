#include <iostream>
#include "triangulo.h"

using namespace std;

int main(){
    Triangulo b;
    int i,j,k;
    for(i=1;i<201;i++){
        for(j=1;j<201;j++){
            for(k=1;k<201;k++){
                b.set_lados(i,j,k);
                b.imprime_triangulo();
            }
        }
    }
}
