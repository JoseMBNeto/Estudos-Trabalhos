#include <stdio.h>
#include <stdlib.h>

int somaP (int N, float mat[N][N], float P[N]);

int main(){

    int N;
    printf("Digite o valor N da matriz e vetor: ");
    scanf("%d", &N);

    float mat[N][N];
    float P[N];

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("Digite os valores [%d][%d]", i,j);
            scanf("%f", &mat[i][j]);
        }
    }

    for (int i=0;i<N;i++){
        printf("Digite o valor do peso [%d]: ",i);
        scanf("%f", &P[i]);
    }

    float resposta = somaP(N, mat, P);
    printf("A coluna que tem a menor soma ponderade e [%f]", resposta);

}

int somaP (int N, float mat[N][N], float P[N]){
    
    float menorsom;
    int indice = 0;

    for (int j=0;j<N;j++){
        float soma = 0.0;
        for (int i=0;i<N;i++){
            soma += mat[i][j] * P[i];
        }
        if (j == 0 || soma < menorsom){
            menorsom = soma;
            indice = j;
        }
    }

    for (int i=0;i<N;i++){
        printf("\n");
        for (int j=0;j<N;j++){
            printf("%.2f\t",mat[j][i]);
        }
    }
    printf("\n");

    return indice;
}