/*
O Diferencial: Comparando malloc vs calloc
Objetivo: Perceber visualmente a diferença de inicialização entre as duas funções.

Tarefa: Aloque um array de 5 inteiros usando malloc e outro array de 5 inteiros usando calloc.

Imediatamente após a alocação (sem atribuir valores), peça ao programa para imprimir o conteúdo de ambos os arrays.

O que observar: Note que o array do malloc provavelmente terá "lixo" (números aleatórios), enquanto o do calloc estará zerado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int *p = (int *) malloc(n * sizeof(int));
    int *cp = (int*) calloc(n, sizeof(int));

    printf("Malloc:");
    for (int i=0; i<n;i++){
        printf("%d ", *(p+i));
    }
    printf("\n");

    printf("Calloc:");
    for (int i=0; i<n;i++){
        printf("%d ", *(cp));
    }
    
    return 0;
}