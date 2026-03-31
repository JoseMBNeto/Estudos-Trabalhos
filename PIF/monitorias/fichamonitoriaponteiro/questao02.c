#include <stdio.h>

void classe (int *vet, int n, int *pos, int *neg, int *zero){

    *pos = 0;
    *neg = 0;
    *zero = 0;

    int *p = vet, *fim = vet + n;

        if(*p > 0){
            (*pos)++;
        }else if (*p < 0){
            (*neg)++;
        }else{
            (*zero)++;
        }

}

int main() {
    
    int n, pos, neg, zero;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    

    for (int i=0; i<n;i++){
        printf("Digite os valores dentro do vetor no indice [%d]", i);
        scanf("%d", &v[i]);
    }

    classe(v, n, &pos, &neg, &zero);
    printf("Valores positivos: %d", pos);
    printf("Valores negativos: %d", neg);
    printf("Valores iguais a zero: %d", zero);

    return 0;
}