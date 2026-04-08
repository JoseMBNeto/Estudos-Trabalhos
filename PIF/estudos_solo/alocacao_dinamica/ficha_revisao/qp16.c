/*
Escreva um programa que aloque uma matriz de inteiros M x N usando um ponteiro para ponteiro (int **). O
programa deve preencher a matriz com valores aleatórios, imprimir a transposta dela e liberar toda a memória
(cada linha individualmente e depois o ponteiro principal).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,m,semente;
    
    printf("Digite os valores de M e N: ");
    scanf("%d %d", &m, &n);

    int **mat = (int **) malloc (m * sizeof(int*));

    for (int i=0;i<m;i++){
        mat[i] = (int *) malloc (n * sizeof(int));
    }


    printf("Digite a chave para randomizar: ");
    scanf("%d", &semente);
    srand(semente);

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            mat[i][j] = rand() % 100;
        }
    }

    printf("Normal \n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Transposta \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }


    return 0;
}