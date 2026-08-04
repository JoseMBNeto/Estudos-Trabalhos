/*
Implemente recursivamente a função int contaPares(int v[], int n) que recebe um vetor
de n inteiros e retorna quantos elementos são pares. Não use laços.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaPares (int v[], int n){
    if (n == 0) return 0;
    else{
        if (v[n-1] % 2 == 0) return 1 + contaPares(v, n-1);
        else{
            return 0 + contaPares(v, n-1);
        }
    }
}

int main() {
    int meuVetor[] = {1, 2, 3, 4, 5, 6, 7, 8, -2};
    int tamanho = 9;
    
    int resultado = contaPares(meuVetor, tamanho);
    
    printf("Quantidade de numeros pares: %d\n", resultado);
    
    return 0;
}