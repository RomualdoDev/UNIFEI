#include <iostream>
#include "CFracao.h"

using namespace std;

int main(){
    int num,den;
    int n1,n2,d1,d2;
    cout<<"Digite o numerador da primeira fracao:"<<endl;
    cin>>n1;
    cout<<"Digite o denominador da primeira fracao:"<<endl;
    cin>>d1;
    cout<<"Digite o numerador da segunda fracao:"<<endl;
    cin>>n2;
    cout<<"Digite o numerador da segunda fracao:"<<endl;
    cin>>d2;
    CFracao fra1(n1,d1);
    CFracao fra2(n2,d2);
    cout<<n1<<"/"<<d1<<" + "<<n2<<"/"<<d2<<" = ";
    fra1.Somar(fra2).Print();
    cout<<endl;
    cout<<n1<<"/"<<d1<<" - "<<n2<<"/"<<d2<<" = ";
    fra1.Subtrair(fra2).Print();
    cout<<endl;
    cout<<n2<<"/"<<d2<<" - "<<n1<<"/"<<d1<<" = ";
    fra2.Subtrair(fra1).Print();
    cout<<endl;
    cout<<n1<<"/"<<d1<<" * "<<n2<<"/"<<d2<<" = ";
    fra1.Multiplicar(fra2).Print();
    cout<<endl;
    cout<<n1<<"/"<<d1<<" : "<<n2<<"/"<<d2<<" = ";
    fra1.Dividir(fra2).Print();
    cout<<endl;
    cout<<n2<<"/"<<d2<<" : "<<n1<<"/"<<d1<<" = ";
    fra2.Dividir(fra1).Print();
    cout<<endl;
    if(fra1.MenorQue(fra2)){
        cout<<n1<<"/"<<d1<<" e menor que "<<n2<<"/"<<d2<<endl;
    }else{
        cout<<n2<<"/"<<d2<<" e menor que "<<n1<<"/"<<d1<<endl;
    }
    if(fra1.MaiorQue(fra2)){
        cout<<n1<<"/"<<d1<<" e maior que "<<n2<<"/"<<d2<<endl;
    }else{
        cout<<n2<<"/"<<d2<<" e maior que "<<n1<<"/"<<d1<<endl;
    }
    if(fra1.Igual(fra2)){
        cout<<n1<<"/"<<d1<<" e igual a "<<n2<<"/"<<d2<<endl;
    }else{
        cout<<"As fracoes sao diferentes!"<<endl;
    }
    cout<<n1<<"/"<<d1<<" como float = "<<fra1.ComoFloat()<<endl;
    cout<<n2<<"/"<<d2<<" como float = "<<fra2.ComoFloat()<<endl;
    return 0;
}
