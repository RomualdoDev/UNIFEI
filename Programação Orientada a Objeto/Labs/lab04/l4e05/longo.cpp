#include "longo.h"
#include <iostream>
#include <string.h>

using namespace std;

Longo::Longo(){
    int i;
    for(i=0;i<30;i++){
        v[i] = 0;
    }
}

Longo::Longo(char x[30])
{
    int i, j = 0;
    for(i=0; i<30; i++)
    {
        if(x[i] == '0')
        {
            j++;
        }
        else
        {
            break;
        }
    }
    for(i=0; i<30; i++)
    {
        if(x[j] == '\0')
        {
            break;
        }
        v[i] = x[j] - 48;
        j++;
    }
    for(j=i; j<30; j++)
    {
        v[j] = 10;
    }
}

Longo::~Longo()
{

}

Longo Longo :: operator+(Longo v2)
{
    int a[30], b[30], r[30];
    int i, j, ult;
    for(i=0; i<30; i++)
    {
        if(v[i] == 10)
        {
            ult = i;
            break;
        }
    }
    j = 0;
    while(ult > 0)
    {
        a[j] = v[ult-1];
        ult--;
        j++;
    }
    for(i=j; i<30; i++)
    {
        a[i] = 10;
    }
    for(i=0; i<30; i++)
    {
        if(v2.v[i] == 10)
        {
            ult = i;
            break;
        }
    }
    j = 0;
    while(ult > 0)
    {
        b[j] = v2.v[ult-1];
        ult--;
        j++;
    }
    for(i=j; i<30; i++)
    {
        b[i] = 10;
    }
    int sobra = 0;
    for(i=0; i<30; i++)
    {
        if(a[i] != 10 && b[i] != 10)
        {
            r[i] = a[i] + b[i] + sobra;
            if(r[i] >= 10)
            {
                sobra = 1;
                r[i] = r[i] - 10;
            }
            else
            {
                sobra = 0;
            }
        }
        else
        {
            if (b[i] != 10)
            {
                r[i] = b[i] + sobra;
                if(r[i] == 10)
                {
                    sobra = 1;
                    r[i] = 0;
                }
                else
                {
                    sobra = 0;
                }
            }
            else
            {
                if(a[i] != 10)
                {
                    r[i] = a[i] + sobra;
                    if(r[i] == 10)
                    {
                        sobra = 1;
                        r[i] =
                            0;
                    }
                    else
                    {
                        sobra = 0;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }
    ult = i;
    if(sobra == 1)
    {
        r[ult] = 1;
        ult++;
    }
    j = 0;
    while(ult > 0)
    {
        v2.v[j] = r[ult-1];
        ult--;
        j++;
    }
    for(i=j; i<30; i++)
    {
        v2.v[i] = 10;
    }
    return v2;
}

Longo Longo :: operator-(Longo v2)
{
    int a[30], b[30], r[30];
    int i, j, ult, ult2, maior = 0;
    for(i=0; i<30; i++)
    {
        if(v[i] == 10)
        {
            ult = i;
            break;
        }
    }
    j = 0;
    while(ult > 0)
    {
        a[j] = v[ult-1];
        ult--;
        j++;
    }
    ult = j;
    for(i=j; i<30; i++)
    {
        a[i] = 10;
    }
    for(i=0; i<30; i++)
    {
        if(v2.v[i] == 10)
        {
            ult2 = i;
            break;
        }
    }
    j = 0;
    while(ult2 > 0)
    {
        b[j] = v2.v[ult2-1];
        ult2--;
        j++;
    }
    ult2 = j;
    for(i=j; i<30; i++)
    {
        b[i] = 10;
    }
    if(ult2 > ult)
    {
        maior = 1;
    }
    if (ult2 == ult)
    {
        for(i=ult; i>=0; i--)
        {
            if(b[i] > a[i])
            {
                maior = 1;
                break;
            }
            if(a[i] > b[i])
            {
                break;
            }
        }
    }

    if(maior)
    {
        for(i=0; i<30; i++)
        {
            r[i] = a[i];
            a[i] = b[i];
            b[i] = r[i];
        }
    }
    int falta = 0;
    for(i=0; i<30; i++)
    {
        if(a[i] != 10 && b[i] != 10)
        {
            r[i] = a[i] - b[i] + falta;
            if(r[i] < 0)
            {
                falta = -1;
                r[i] = r[i] + 10;
            }
            else
            {
                falta = 0;
            }
        }
        else
        {
            if(a[i] != 10)
            {
                r[i] = a[i] + falta;
                falta = 0;
                if(r[i] < 0)
                {
                    falta = -1;
                    r[i] = r[i] + 10;
                }
            }
            else
            {
                break;
            }
        }
    }
    ult = i;
    while(r[ult-1] == 0)
    {
        ult--;
    }
    j = 0;
    while(ult > 0)
    {
        v2.v[j] = r[ult-1];
        ult--;
        j++;
    }
    for(i=j; i<30; i++)
    {
        v2.v[i] = 10;
    }
    if(maior)
    {
        v2.v[0] = v2.v[0]*(-1);
    }
    return v2;

}



ostream& operator<<(ostream& output, const Longo& c)
{
    int i=0;
    if(c.v[0] == 10)
    {
        cout << "";
    }
    while(c.v[i] != 10)
    {
        cout << c.v[i];
        i++;
    }
    cout<<" ";
}

istream& operator>>(istream&, Longo& l){
    string aux;
    cin >> aux;
    int i = 0,j = 0;
    for(i=0; i<30; i++)
    {
        if(aux[i] == '0')
        {
            j++;
        }
        else
        {
            break;
        }
    }
    for(i=0; i<30; i++)
    {
        if(aux[i] == '\0')
        {
            break;
        }
        l.v[i] = aux[j] - 48;
        j++;
    }
    for(j=i; j<30; j++)
    {
        l.v[j] = 10;
    }
}

bool Longo::operator>(Longo l){
    int i,cont=0,conta=0;
    for(i=0;i<30;i++){
        if(v[i]!=10){
            cont++;
        }
        if(l.v[i]!=10){
            conta++;
        }
    }
    if(cont>conta){
        return true;
    }
    if(cont<conta){
        return false;
    }
    if(cont == conta){
        for(i=0;i<cont;i++){
            if(v[i]<=l.v[i]){
                return false;
            }
        }
    }
    return true;
}

bool Longo::operator<(Longo l){
    int i,cont=0,conta=0;
    for(i=0;i<30;i++){
        if(v[i]!=10){
            cont++;
        }
        if(l.v[i]!=10){
            conta++;
        }
    }
    if(cont<conta){
        return true;
    }
    if(cont>conta){
        return false;
    }
    if(cont == conta){
        for(i=0;i<cont;i++){
            if(v[i]>=l.v[i]){
                return false;
            }
        }
    }
    return true;
}

bool Longo::operator==(Longo l){
    int i,cont=0,conta=0;
    for(i=0;i<30;i++){
        if(v[i]!=10){
            cont++;
        }
        if(l.v[i]!=10){
            conta++;
        }
    }
    if(cont>conta){
        return false;
    }
    if(cont<conta){
        return false;
    }
    if(cont == conta){
        for(i=0;i<cont;i++){
            if(v[i]!=l.v[i]){
                return false;
            }
        }
    }
    return true;
}

bool Longo::operator!=(Longo l){
    int i,cont=0,conta=0;
    for(i=0;i<30;i++){
        if(v[i]!=10){
            cont++;
        }
        if(l.v[i]!=10){
            conta++;
        }
    }
    if(cont>conta){
        return true;
    }
    if(cont<conta){
        return true;
    }
    if(cont == conta){
        for(i=0;i<cont;i++){
            if(v[i]==l.v[i]){
                return false;
            }
        }
    }
    return true;
}

bool Longo::operator>=(Longo l){
    int i,cont=0,conta=0;
    for(i=0;i<30;i++){
        if(v[i]!=10){
            cont++;
        }
        if(l.v[i]!=10){
            conta++;
        }
    }
    if(cont>conta){
        return true;
    }
    if(cont<conta){
        return false;
    }
    if(cont == conta){
        for(i=0;i<cont;i++){
            if(v[i]<l.v[i]){
                return false;
            }
        }
    }
    return true;
}

bool Longo::operator<=(Longo l){
    int i,cont=0,conta=0;
    for(i=0;i<30;i++){
        if(v[i]!=10){
            cont++;
        }
        if(l.v[i]!=10){
            conta++;
        }
    }
    if(cont<conta){
        return true;
    }
    if(cont>conta){
        return false;
    }
    if(cont == conta){
        for(i=0;i<cont;i++){
            if(v[i]>l.v[i]){
                return false;
            }
        }
    }
    return true;
}
