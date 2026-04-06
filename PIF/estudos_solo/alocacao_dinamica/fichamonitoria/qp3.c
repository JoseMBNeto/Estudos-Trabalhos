#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *vetIni = (int *)malloc(5 * sizeof(int));
    
    for (int i=0;i<5;i++){
        scanf("%d", &vetIni[i]);
    }

    printf("\n Valor pre-alteracao do vetor: \n[");
    
   for (int i=0;i<5;i++){
        printf("%d ", vetIni[i]);
    } 
    
    printf("]\n");

    vetIni = realloc(vetIni, 10 * (sizeof(int)));

    printf("Digite mais 5 valores para serem adicionados no vetor:\n");
    for (int i = 5; i < 10; i++) {
        scanf("%d", &vetIni[i]);
    }

    printf("\nVetor apos alteracao:\n[");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetIni[i]);
    }
    printf("]\n");

    free(vetIni);
    return 0;

}