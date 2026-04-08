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
    
    int maior=0;

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }


    printf("\nPreenchida: \n");

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nMaior termo na matriz: \n");
    printf("%d", maior);


    return 0;
}