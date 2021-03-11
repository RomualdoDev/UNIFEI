#include <iostream>
#include "segundo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

Segundo::Segundo(){
    xq = 1;;
    x = 1;
    c = 1;
}

Segundo::Segundo(int a, int b, int co){
    if(xq <= 0){
        xq = 1;
    }else{
        xq = a;
    }
    x = b;
    c = co;
}

void Segundo::set_valores(int quad, int lin, int cons){
    xq = quad;
    x = lin;
    c = cons;
}

void Segundo::calcula_delta(){
    int x1,x2;
    delta = ((x*x)-4*x2*c);
    if(delta>0){
        x1 = ((-x + sqrt(delta))/(2*xq));
        x2 = ((-x - sqrt(delta))/(2*xq));
        cout<<"Delta maior que 0!"<<endl;
        cout<<"Solucoes:"<<endl;
        cout<<x1<<endl;
        cout<<x2<<endl;
    }else{
        if(delta == 0){
            x1 = (-x/2*xq);
            cout<<"Delta igual a 0!"<<endl;
            cout<<"Solucoes:"<<endl;
            cout<<x1;
        }else{
            if(delta < 0){
                cout<<"Delta menor que 0!"<<endl;
                cout<<"Solucoes:"<<endl;
                cout<<"("<<-x<<" + "<<sqrt(abs(delta))<<"i)/"<<(2*xq)<<endl;
                cout<<"("<<-x<<" - "<<sqrt(abs(delta))<<"i)/"<<(2*xq)<<endl;
            }
        }
    }
}

