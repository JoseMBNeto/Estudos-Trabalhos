/*
Crie uma função que receba dois vetores dinâmicos e seus tamanhos, e retorne um terceiro vetor (também
dinâmico) que seja a junção dos dois.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *concatenar_vetor (int *vet1, int *vet2, int n){  
    int k=0;
    int *vet3 = (int *) malloc((n*2) * sizeof(int));

    for (int i=0;i<n;i++){
        vet3[k++] = vet1[i];
    }
    
    for (int i=0;i<n;i++){
        vet3[k++] = vet2[i];
    }

    return vet3;
}

void preencher (int *vet1, int *vet2, int n){
    
    printf("Digite o valor armazenado no vetor 1: ");
    for (int i=0;i<n;i++){
        scanf("%d", &vet1[i]);
    }

    printf("\n");
    
    printf("Digite o valor armazenado no vetor 2: ");
    for (int i=0;i<n;i++){
        scanf("%d", &vet2[i]);
    }
}

int main() {

    int n =5;
    int *vet1, *vet2;

    vet1 = (int *) malloc(n * sizeof(int));
    vet2 = (int *) malloc(n * sizeof(int));

    preencher(vet1, vet2, n);

    int *resp = concatenar_vetor(vet1, vet2, n);
    
    printf("Vetor 3: \n");
    for (int i=0;i<n*2;i++){
        printf("%d ", resp[i]);
    }
    
    return 0;
}