/*
Escreva um programa que:
• leia n e m
• aloque dinamicamente uma matriz usando um único bloco contínuo de memória
• leia os valores da matriz
• imprima a matriz
• calcule a soma de todos os elementos
• libere a memória
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, m, *matriz, soma=0;
    printf("Digite os valores de N e M: ");
    scanf("%d %d", &n, &m);

    matriz = (int *) malloc ((n * m) * sizeof(int*));

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("Preencha o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i * m + j]);
        }
    }

    printf("Valores da matriz: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ", matriz[i * m + j]);
        }
        printf("\n");
    }
    
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            soma += matriz[i * m + j];
        }
    }
    printf("Valor da soma da matriz: %d", soma);


    free(matriz);
    
    return 0;
}