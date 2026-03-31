#include <stdio.h>

int repeticoes (int N, int V[N], int R[N]);

int main(){

    int N, i;
    scanf("%d", &N);

    int V[N];
    int R[N];
    
    for (i=0;i<N;i++){
        printf("Digite o valor de V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    int resultado = repeticoes(N, V, R);
    printf("%d", resultado);
    printf("\n");

    for (i=0;i<resultado;i++){
        printf("%d", R[i]);
    }

}

int repeticoes (int N, int V[N], int R[N]){

    if (N==0){
        return 0;
    }

    int contador=1;
    R[0]=V[0];

    for (int i=1;i<N;i++){
        if (V[i] != V[i-1]){
            R[contador] = V[i];
            contador++;
        }
    }

    return contador;
}