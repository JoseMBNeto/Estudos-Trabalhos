#include <stdio.h>
#include <stdlib.h>

void redimensionar(int **vet, int *n);

int main() {
    
    int n;
    scanf("%d", &n);

    int *vet = NULL;

    redimensionar(&vet, &n);

    free(vet);
    return 0;
}

void redimensionar(int **vet, int *n) {
    *vet = (int *) malloc(*n * sizeof(int));

    int v=1,i=0;
    
    printf("Digite os números: ");
    while(1){
        scanf("%d", &v);

        printf("Vetor: ");
        for (int j = 0; j < i; j++) {
            printf("%d ", (*vet)[j]);
        }
        printf("\n");

        if (v == 0){
            break;
        }

        (*vet)[i] =v;
        i++;

        if (i == *n){
            *n *= 2;
            int *temp = realloc(*vet, *n * sizeof(int));

            if (temp == NULL){
                printf("Erro ao realocar! \n");
                return;
            }
            *vet = temp;
        }
    }
}

