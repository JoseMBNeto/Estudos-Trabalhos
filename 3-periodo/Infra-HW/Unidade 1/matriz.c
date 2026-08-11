#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* TROQUE ESTE VALOR antes de cada compilação: 64, 256, 1024 ou 4096 */
#define N 4096
#define REPEAT 1

static int m[N][N];

double soma_por_linha(void) {
    volatile long long soma = 0;  /* volatile: impede o compilador de otimizar o laço embora */
    clock_t ini = clock();
    for (int r = 0; r < REPEAT; r++) {
        long long parcial = 0;
        for (int i = 0; i < N; i++)       // linha
            for (int j = 0; j < N; j++)   // coluna
                parcial += m[i][j];
        soma += parcial;
    }
    clock_t fim = clock();
    printf("linha  -> soma=%lld  ", soma);  // usa o resultado!
    return ((double)(fim - ini) / CLOCKS_PER_SEC) / REPEAT;  // tempo médio por rodada
}

double soma_por_coluna(void) {
    volatile long long soma = 0;
    clock_t ini = clock();
    for (int r = 0; r < REPEAT; r++) {
        long long parcial = 0;
        for (int j = 0; j < N; j++)       // coluna
            for (int i = 0; i < N; i++)   // linha
                parcial += m[i][j];
        soma += parcial;
    }
    clock_t fim = clock();
    printf("coluna -> soma=%lld  ", soma);
    return ((double)(fim - ini) / CLOCKS_PER_SEC) / REPEAT;
}

int main(void) {
    /* preenche a matriz com algo (não importa o valor) */
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            m[i][j] = i + j;

    printf("N = %d\n", N);
    double t_linha  = soma_por_linha();
    printf("tempo_linha=%f s\n", t_linha);

    double t_coluna = soma_por_coluna();
    printf("tempo_coluna=%f s\n", t_coluna);

    return 0;
}