/*
Peça ao usuário um valor N. Aloque dinamicamente um vetor de inteiros de tamanho N. Preencha o vetor com
dados do usuário e, em seguida, crie um segundo vetor dinâmico para armazenar os elementos do primeiro
vetor em ordem inversa. Imprima o segundo vetor e libere ambos.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n, k=0;
    printf("Digite o tamanho n: ");
    scanf("%d", &n);

    int *vet = (int *) malloc (n * sizeof(int));
    int *vet2 = (int*) malloc (n * sizeof(int));

    for(int i=0;i<n;i++){
        printf("Preencha o vetor: ");
        scanf("%d", &vet[i]);
    }

    for (int i=n-1;i>=0;i--){
        vet2[k++] = vet[i]; 
    }

    for (int i=0;i<n;i++){
        printf("%d ", vet2[i]);
    }

    free(vet2);
    free(vet);
    return 0;
}