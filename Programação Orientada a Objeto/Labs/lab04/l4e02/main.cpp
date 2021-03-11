#include <iostream>
#include "CFracao.h"

using namespace std;

int main()
{
    int num,den;
    int n1,n2,d1,d2;
    CFracao fra1;
    CFracao fra2;
    cout<<"Digite o numerador e o denominador da primeira fracao:"<<endl;
    cin>>fra1;
    cout<<"Digite o numerador e o denominador da segunda fracao:"<<endl;
    cin>>fra2;
    cout<<fra1<<" + "<<fra2<<" = ";
    CFracao fra0 = fra1 + fra2;
    cout<<fra1;
    cout<<endl;
    cout<<fra1<<" - "<<fra2<<" = ";
    CFracao fra01 = fra1-fra2;
    cout<<fra2;
    cout<<endl;
    cout<<fra2<<" - "<<fra1<<" = ";
    CFracao fra3 = fra2 - fra1;
    cout<<fra3;
    cout<<endl;
    cout<<fra1<<" * "<<fra2<<" = ";
    CFracao fra4 = fra1 * fra2;
    cout<<fra4;
    cout<<endl;
    cout<<fra1<<" : "<<fra2<<" = ";
    CFracao fra5 = fra1 / fra2;
    cout<<fra5;
    cout<<endl;
    cout<<fra2<<" : "<<fra1<<" = ";
    CFracao fra6 = fra2 / fra1;
    cout<<fra6;
    cout<<endl;
    if(fra1<fra2)
    {
        cout<<fra1<<" e menor que "<<fra2<<endl;
    }
    else
    {
        cout<<fra2<<" e menor que "<<fra2<<endl;
    }
    if(fra1>fra2)
    {
        cout<<fra1<<" e maior que "<<fra2<<endl;
    }
    else
    {
        cout<<fra2<<" e maior que "<<fra1<<endl;
    }
    if(fra1==fra2)
    {
        cout<<fra1<<" e igual a "<<fra2<<endl;
    }
    if(fra1!=fra2)
    {
        cout<<"As fracoes sao diferentes!"<<endl;
    }
    if(fra1>=fra2){
        cout<<fra1<< "e maior ou igual que "<<fra2<<endl;
    }
    if(fra1<=fra2){
        cout<<fra1<< "e menor ou igual que "<<fra2<<endl;
    }
    cout<<fra1<<" como float = "<<(float)fra1<<endl;
    cout<<fra2<<" como float = "<<(float)fra2<<endl;
    return 0;
}
