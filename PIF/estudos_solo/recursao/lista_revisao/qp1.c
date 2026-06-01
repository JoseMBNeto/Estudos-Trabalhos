/*
Implemente recursivamente a função int somaDigitos(int n) que recebe um inteiro não
negativo e retorna a soma de seus dígitos. Não use laços.
somaDigitos(123) → 6
somaDigitos(9) → 9
somaDigitos(0) → 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaDigitos (int n){
    if(n == 0) return 0;
    else{
       return n % 10 + somaDigitos(n / 10);
    }
}

int main() {

    int n;

    printf("Digite o valor desejado: \n");
    scanf("%d", &n);

    int r = somaDigitos(n);
    printf("%d", r);
    
    return 0;
}

