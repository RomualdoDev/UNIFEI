#include "poligono.h"
#include "retangulo.h"
#include <math.h>
#include <iostream>
using namespace std;

int main(){
    int i,a = 4,b = 5,la;
    float c,l,com;
    Retangulo v[5];
    Retangulo *ptr;
    Poligono ob;
    for(i=0;i<5;i++){
        cout<<"Digite o comprimento: "<<endl;
        cin>>c;
        v[i].set_comp(c);
        cout<<"Digite o largura: "<<endl;
        cin>>l;
        v[i].set_larg(l);
    }
     for(i=0;i<5;i++){
        v[i].imprime();
        v[i].desenha();
    }
    ptr = new Retangulo;
    ptr->set_comp(a);
    ptr->set_larg(b);
    ptr->imprime();
    ptr->area();
    ptr->perimetro();
    ptr->desenha();
    ptr->verifica();
    delete ptr;
    cout<<"Digite os lados do poligono"<<endl;
    cin>>la;
    ob.set_lado(la);
    cout<<"Digite o comprimento dos lados"<<endl;
    cin>>com;
    ob.set_comp(com);
    cout<<"Area: "<<ob.area()<<endl;
    cout<<"Perimetro: "<<ob.perimetro()<<endl;
    ob.nome();
}
