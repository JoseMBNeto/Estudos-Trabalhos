#include <stdio.h>

int prodEscalar (int *v1, int *v2, int n){
    int i, soma =0;

    for (i=0; i<n; i++){
        soma += *(v1+i) * *(v2+i);
    }
    return soma;
}

int main() {
    
    int n,i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v1[n], v2[n];

    printf("Digite os valores do vetor 1: ");
    for (i=0;i<n;i++){
        scanf("%d", &v1[i]);
    }
    
    printf("Digite os valores do vetor 2: ");
    for (i=0;i<n;i++){
        scanf("%d", &v2[i]);
    }

    int r = prodEscalar(v1, v2, n);
    printf("%d", r);

    return 0;
}