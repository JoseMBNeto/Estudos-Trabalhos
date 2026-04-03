#include <stdio.h>
#include <stdlib.h>

int main() {

    /*int *vetor;
    int n;

    n = 5;

    vetor = (int *)malloc(n * sizeof(int));

    for(int i = 0; i<n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor preenchido: ");
    for(int i = 0; i<n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);*/

    int **matriz;
    int linhas = 3, colunas = 3;
    
    

    //alocando espaco para as linhas
    matriz = (int **)malloc(linhas * sizeof(int*));

    //alocando espaco para as colunas
    for(int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    
    //preenchendo matriz
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz prenchida: \n");
    
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
    printf("\n");
    }

}