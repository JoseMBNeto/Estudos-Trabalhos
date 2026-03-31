#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int X[N];
    int i;

    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    int menor_num = X[0];
    int posicao = 0;

    for (i = 0; i < N; i++){
        if (X[i] < menor_num){
            menor_num = X[i];
            posicao = i;
        }
    }

    printf("%d %d", menor_num, posicao);

}