/*
Implemente recursivamente a função int maiorElemento(int m[][MAX], int lin, int
col, int n) que percorre uma matriz quadrada n x n e retorna o maior elemento. A travessia
deve avançar coluna por coluna e, ao chegar na última coluna, passar para a próxima linha.
Nenhum laço é permitido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define MAX 3

int maiorElemento (int m[][MAX], int lin, int col, int n){
    if(lin == n) return INT_MIN;
    else{
        if (col == n) return maiorElemento(m, lin+1, 0, n);
        else{
            int atual = m[lin][col];
            int restante = maiorElemento(m, lin, col+1, n);
            if (atual > restante) return atual;
            else return restante;
        }
    } 
}

int main() {
    
    return 0;
}