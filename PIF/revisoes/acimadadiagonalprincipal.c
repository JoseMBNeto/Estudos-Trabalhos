#include <stdio.h>

int main(){
    
    double M[12][12];
    int i, j;
    char opcao;
    double soma = 0.0;
    int contador = 0;

    scanf(" %c", &opcao);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", M[i][j]);
        }
    }

    for (i = 0; i < 12; i++){
        for (j = i + 1; j < 12; j++){
           soma += M[i][j];
           contador++;
        }
    }

    if (opcao == 'S'){
        printf("%.1lf\n", soma);
    }
    else if (opcao == 'M'){
        printf("%.1lf\n", soma / contador);
    }

return 0;
}