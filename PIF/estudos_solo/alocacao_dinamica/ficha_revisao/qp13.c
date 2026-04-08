/*
Escreva um programa que:
• leia n e m
• aloque dinamicamente uma matriz de inteiros com n linhas e m colunas usando int **
• leia os valores da matriz
• imprima a soma de cada linha

• libere corretamente toda a memória
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,m, **matriz, soma=0;
    printf("Digite as linhas e colunas: ");
    scanf("%d %d", &n, &m);

    matriz = (int **) malloc(n * sizeof(int*));

    for (int i=0;i<n;i++){
        matriz[i] = (int *) malloc (m * sizeof(int));
    }

    printf("Preencha a matriz: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("Valor armazenado em [%d] [%d]", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    
    for (int i=0;i<n;i++){
        soma = 0;
        for (int j=0;j<m;j++){
            soma += matriz[i][j];
        }
        printf("Soma da linha %d = %d\n",i, soma);
    }

    for (int i=0;i<n;i++){
        free(matriz[i]);
    }

    free(matriz);
    
    return 0;
}