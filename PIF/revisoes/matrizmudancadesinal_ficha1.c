#include <stdio.h>
#include <stdlib.h>

int sinais (int N, int mat[N][N]);

int main(){

    int N;
    
    printf("Digite o valor N da matriz: ");
    scanf("%d", &N);

    int mat[N][N];

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("Digite o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int resposta = sinais(N, mat);
    printf("%d", resposta);


}

int sinais (int N, int mat[N][N]){

    int ultimaV = 0;
    int indice = 0;

    for (int i=0;i<N;i++){

        int variacao = 0;
        for (int j=0;j<N;j++){
            if (mat[i][j] != 0 && mat[i][j+1] != 0){
                if ((mat[i][j] > 0 && mat[i][j+1] < 0) ||
                    (mat[i][j] < 0 && mat[i][j+1] > 0)){
                        variacao++;
                }
            }
        }

        if (variacao > ultimaV){
            ultimaV = variacao;
            indice = i;
        }
    }

    return indice;
}