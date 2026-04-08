#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int *vet = (int *) malloc (n * sizeof(int));

    for (int i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }

    int x, p;

    printf("Digite X :");
    scanf("%d", &x);

    printf("Digite p :");
    scanf("%d", &p);

    vet = realloc (vet, (n + 1) * sizeof(int));

    for (int i=n;i>p;i--){
        vet[i] = vet[i-1];
    }
    vet[p] = x;
    n++;

    for (int i=0;i<n;i++){
        printf("%d ", vet[i]);
    }

    free(vet);


    return 0;
}