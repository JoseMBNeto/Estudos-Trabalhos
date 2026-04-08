#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    int **matriz;

    matriz = (int **) malloc(n * sizeof(int*));

    for (int i=0;i<n;i++){
        matriz[i] = (int*) malloc(m * sizeof(int));
    }

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n Preenchida: \n");

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}