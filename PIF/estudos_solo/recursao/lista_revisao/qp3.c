/*
Implemente recursivamente a função int estaNoVetor(int v[], int n, int x) que
retorna 1 se x estiver em v e 0 caso contrário. Não use laços.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int estaNoVetor (int v[], int n, int x){
    if (n == 0) return 0;
    else{
        if (v[n-1] != x) return estaNoVetor(v, n-1, x);
        else{
            return 1;
        } 
    }
}

int main() {

    int v[] = {1,2,3,4,5,6,7};
    int n = 7;
    int x = 5;

    int r = estaNoVetor(v, n, x);
    printf("%d", r);
    
    return 0;
}