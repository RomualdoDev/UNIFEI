#include "retangulo.h"
#include <iostream>
#include <math.h>
using namespace std;

Retangulo::Retangulo(float vcomp,float vlarg){
    set_comp(vcomp);
    set_larg(vlarg);
    comp = vcomp;
    larg = vlarg;
    cout<< "Construindo..."<< endl;
}

void Retangulo::set_comp(float comp){
    if(comp >= 0 && comp <= 20){
        this->comp = comp;
    }else{
        this->comp = 1;
    }
}

void Retangulo::set_larg(float larg){
    if(larg >= 0 && larg <= 20){
        this->larg = larg;
    }else{
        this->larg = 1;
    }
}


float Retangulo::area(){
    return comp*larg;
}

float Retangulo::perimetro(){
    return 2*(comp+larg);
}

void Retangulo::desenha(){
    int i, j;
    char meio, borda;
    cout<<"Material da borda: "<<endl;
    cin>> borda;
    cout<<"Material do meio: "<<endl;
    cin>> meio;
    for(i=0;i<comp;i++){
        for(j=0;j<larg;j++){
            if((i!=0 && i!=comp-1)&&(j!=0 && j != larg-1)){
                cout << meio;
            }else{
                cout << borda;
            }
        }
        cout<<endl;
    }
}

void Retangulo::verifica(){
    if(comp == larg){
        cout<<"E um quadrado"<< endl;
    }else{
        cout<<"E um retangulo"<< endl;
    }
}

void Retangulo::atribui(float x, float y){
    set_comp(x);
    set_larg(y);
}

void Retangulo::imprime(){
    cout<< "Comprimento: "<< comp <<endl;
    cout<< "Largura: "<< larg <<endl;
}

