#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int fatorial(int num){
    if(num < 2){
        return 1;
    }else{
        return num*fatorial(num-1);
    }
}

int somatorio(int num){
    if(num != 0){
        return num+somatorio(num-1);
    }
}

void primos(){
    int n = 0, i,cont=0,qtd = 0;
    while(qtd <= 20){
        cont = 0;
        for(i=1;i<=n;i++){
            if(n%i==0){
                cont++;

            }
        }
        if(cont == 2){
            cout << n<< endl;
            qtd++;
        }
        n++;
    }
}


void printInt( int n, int base ){
    char Array[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
						  '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    if(n >= base)
		printInt(n/base, base);
        cout << Array[ n % base ];
}///Trocar de base.


void desenhar(int largura, int altura, char borda, char meio){
    int i, j;
    for(i=0;i<altura;i++){
        for(j=0;j<largura;j++){
            if((i!=0 && i!=altura-1)&&(j!=0 && j != largura-1)){
                cout << meio;
            }else{
                cout << borda;
            }
        }
        cout<<endl;
    }
}


void mdc(int x, int y){
    if(y==0){
        cout<<x<<endl;
    }else{
        mdc(y,x%y);
    }
}


int menu(){
    int op;
    cout << " -------------------------------------------------"<<endl;
    cout << "                   Laboratorio 1                  "<<endl;
    cout << " -------------------------------------------------"<<endl;
    cout << " - Digite 1 para calcular o fatorial. "<<endl;
    cout << " - Digite 2 para imprimir os 20 primeiros primos. "<<endl;
    cout << " - Digite 3 para mudar a base. "<<endl;
    cout << " - Digite 4 para desenhar um retangulo. "<<endl;
    cout << " - Digite 5 para calcular o MDC. "<<endl;
    cout << " - Digite 6 para calcular o somatorio. "<<endl;
    cout << " -------------------------------------------------"<<endl;
    cin >> op;
    return op;
}



int main(){
    int n,largura = 0,altura = 0,x,y;
    char mborda,mmeio;
    int base;
    int num,op;
    do{
        op = menu();
        switch(op){
            case 1:
                cout<<"Digite um numero: "<<endl;
                cin>>num;
                cout<<"O fatorial de "<<num << " e: " <<fatorial(num)<<endl;
                break;
            case 2:
                primos();
                break;
            case 3:
                cout<<"Digite o numero e a base: "<<endl;
                cin>> n >> base;
                printInt(n, base);
                break;
            case 4:
                cout<<"Digite a largura e a altura: "<<endl;
                cin>> largura>> altura;
                cout<<"Digite o material da borda e o material do preenchimento: "<<endl;
                cin>>mborda>>mmeio;
                desenhar(largura,altura,mborda,mmeio);
                break;
            case 5:
                cout<<"Digite o primeiro numero: "<<endl;
                cin>>x;
                cout<<"Digite o segundo numero: "<<endl;
                cin>>y;
                cout<< "O MDC de "<< x << " e " << y << " e: ";
                mdc(x,y);
                break;
            case 6:
                cout<<"Digite um numero: "<<endl;
                cin>>x;
                cout<< "O somatorio dos "<< x << " primeiros numeros inteiros e: " << somatorio(x);
                break;
            default:
                cout<<"Digite um opcao valida! "<<endl;
                break;
        }
    cout<<endl;
    system("pause");
    system("cls");
    }while(op>=1 && op<=6);
}
