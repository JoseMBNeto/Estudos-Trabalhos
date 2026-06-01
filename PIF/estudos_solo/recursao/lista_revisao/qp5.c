/*
Dada uma matriz quadrada n x n, implemente recursivamente a função int somaLinha(int
m[][MAX], int linha, int col, int n) que retorna a soma de todos os elementos de
uma linha específica. Use-a para imprimir a soma de cada linha da matriz. Não use laços internos
à função.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

int somaLinha ( int m[][MAX], int linha, int col, int n){
    if (col == n) return 0;
    else{
        return m[linha][col] + somaLinha(m, linha, col+1, n);
    }
}

void imprimeAsLinhas ( int m[][MAX], int linha, int n){
    if (linha == n) return;
    printf("Soma da linha %d: %d\n", linha+1, somaLinha(m,linha, 0, n));
    imprimeAsLinhas(m,linha+1,n);
}

int main() {
    int n = MAX;
    int m[MAX][MAX] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int linha = 0;

    imprimeAsLinhas(m, linha, n);

    return 0;
}