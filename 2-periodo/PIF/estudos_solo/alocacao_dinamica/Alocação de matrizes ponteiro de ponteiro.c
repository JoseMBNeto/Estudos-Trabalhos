#include <stdio.h>
#include <stdlib.h>

int ** alocamatriz (int l, int c){
    
    int **matriz;
    matriz =(int **) malloc(l * sizeof(int*));
    
    for (int i=0;i<l<i++){
        matriz[i] = (int*) malloc(c * sizeof(int)); 
    }
    
    return matriz
}

void preenchematriz (int** matriz, int l, int c, int valor){
    
    for (int i=0;i<l;i++){
        for (int j=0;j<c;j++){
            matriz[i][j] = valor;
        }
    }
    
}

void libera_mat (int ** matriz, int l){
    for (int i=0;i<l;i++){
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;
}

int main(){
    
    int **m, **n;
    
    m = alocamatriz(3, 4);
    n = alocamatriz(5, 6);
    
    // usando m e n 
    preenchematriz(m, 3, 3, 10);
    preenchematriz(n, 4, 3 , 1);
    
    
    for (int i=0;i<l;i++){
        for (int j=0;j<c;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    return 0;
}