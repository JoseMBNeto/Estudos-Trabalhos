/*
Implemente uma função que receba um vetor dinâmico de inteiros e remova todos os números negativos,
utilizando realloc para diminuir o tamanho do vetor para o tamanho exato final após a remoção.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removerNeg (int *vetor, int n){
    int i=0, k=0;

    for (i=0; i<n;i++){
        if(vetor[i] >=0){
            vetor[k++] = vetor[i];
        }
    }

    n = k;
    vetor = realloc(vetor, n *sizeof(int));

    for (i=0;i<n;i++){
        printf("%d", vetor[i]);
    }
}

int main() {

    int *vetn, n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetn = (int *) malloc(n * sizeof(int));

    printf("Preencha o vetor: \n");
    for (i=0;i<n;i++){
        scanf("%d", &vetn[i]);
    }

    removerNeg(vetn, n);

    free(vetn);
    
    return 0;
}