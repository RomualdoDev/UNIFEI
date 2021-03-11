#include <stdio.h>

typedef enum{false,true}bool;

int v[10];

bool insere(int valor){
    int i = dispo;
    if(i>MAX){
        return false;
    }else{
        while((i>0)&&(v[i-1]>valor)){
            v[i] = v[i-1];
            i--
        }
        v[i] = valor;
        dispo++;
        return true;
    }
}

bool remove(int valor){
    int i = 0;
    while((i<dispo)&&(v[i]<valor)){
        i++;
    }
    if((i<dispo)&&(v[i]==valor)){
        while(i<dispo-1){
            v[i] = v[i+1];
        }
        dispo--;
        return true;
    }else{
        return false;
    }
}

bool buscabinaria(int valor){
    int inf, sup=MAX-1, mid=0;
    if(inf<=sup){
        mid = (inf+sup)/2;
    }
    if(v[mid]==valor){
        return true;
    }
    else{
        if(v[mid]>valor){
            sup = mid-1;
        }
        else{
            inf = mid+1;
        }
    }
    return -1;
}

int main(int argc, char *argv[]){
	return 0;
}
