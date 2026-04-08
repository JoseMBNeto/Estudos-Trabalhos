#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, n;
    float *vetnota, soma=0, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    vetnota = (float*) calloc(n, sizeof(float));

    for (i=0;i<n;i++){
        printf("Nota dos alunos: ");
        scanf("%f", &*(vetnota+1));
    }

    for (i=0;i<n;i++){
        soma += *(vetnota+i);
    }

    media = soma/n;
    printf("Media: %.lf\n", media);

    printf("Notas maiores que 7: ");
    for (i=0;i<n;i++){
        if(*(vetnota+1) >7){
            printf("%.lf ",  *(vetnota+i));
        }
    }
    return 0;
}