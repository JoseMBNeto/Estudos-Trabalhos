#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, achar=0;
    scanf("%d", &n);

    int *vet = (int *) malloc (n * sizeof(int));

    for (int i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }

    printf("Remove essa merda: ");
    int remv;
    scanf("%d", &remv);

    for (int i=0;i<n;i++){
        if (remv == vet[i]){
            for (int j=i;j<n-1;j++){
                vet[j] = vet[j+1];
            }
            achar =1;
            break;
        }
    }

    if (achar == 0){
        printf("Valor não encontrado");
    }else{
        vet = (int *) realloc(vet, (n - 1) * sizeof(int)); 
        for (int i = 0; i < n - 1; i++) {
            printf("%d ", vet[i]);
        }
    }
    return 0;
}