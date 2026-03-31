/*
    Escreva um programa que:

    lê n
    aloca um vetor de n inteiros
    preenche com valores lidos
    imprime a soma
    libera a memória

    Modifique o anterior para imprimir também média e maior valor.

    Faça um programa que aloque dinamicamente uma string com tamanho exato:

    lê um inteiro n
    aloca n+1 chars
    lê uma palavra (sem espaços) e guarda
    garante '\0' no final
    imprime e libera

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int *vet;
    int soma=0;

    vet = (int *) malloc(n * sizeof(int));

    for(int i=0;i<n;i++){
        *(vet+i) = i;
    }

    for (int i=0;i<n;i++){
        soma+= *(vet+i);
    }

    printf("%d", soma);

    return 0;
}