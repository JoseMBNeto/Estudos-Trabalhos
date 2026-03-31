#include <stdio.h>

int crescente (int N, int mat[N][N]);

// Toda coluna válida J vale mat[i][j] < mat[i][j + 1]

int main(){
    int N;
    printf("Digite o valor N da matriz: ");
    scanf("%d", &N);

    int mat[N][N];

    for (int i = 0;i < N;i++){
        for (int j = 0;j < N;j++){
            printf("digite o valor do [%d][%d] ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int retorno = crescente(N, mat);
    printf("%d ", retorno); 



}

int crescente (int N, int mat[N][N]){

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N - 1; j++){

            if (mat[i][j] < mat[i][j + 1]){
                return 1;
            }else{
                return 0;
            }
        }
    }
}