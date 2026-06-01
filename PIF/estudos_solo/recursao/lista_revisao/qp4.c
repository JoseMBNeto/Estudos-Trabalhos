/*
Implemente recursivamente a função void imprimeInverso(int v[], int inicio, int
fim) que imprime os elementos do vetor da posição fim até inicio, sem modificar o vetor. Não use
laços.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimeInverso (int v[], int inicio, int fim){
    printf("%d", v[fim]);
    if (fim == inicio) return;
    imprimeInverso(v, inicio, fim-1);
}

int main() {
    
    int v[] = {1,2,3,4,5};
    int inicio = 0;
    int fim = 4;

    imprimeInverso(v, inicio, fim);
    
    return 0;
}