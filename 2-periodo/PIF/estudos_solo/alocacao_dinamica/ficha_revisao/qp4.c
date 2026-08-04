#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int *vet1 = (int*) malloc(n * sizeof(int));

    int *vet2 = (int*) malloc(n * sizeof(int));

    for (int i=0;i<n;i++){
        scanf("%d", &vet1[i]);
    }

    printf("Vetor 1: ");
    for (int i=0;i<n;i++){
        printf("%d", vet1[i]);
    }

    printf("\n");

    for (int i=0;i<n;i++){
        vet2[i] = vet1[i];
    }
    
    printf("Vetor 2: ");
    for (int i=0;i<n;i++){
        printf("%d", vet2[i]);
    }

    free(vet2);
    free(vet1);


    return 0;
}