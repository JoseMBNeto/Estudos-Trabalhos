/*
Escreva um programa que:
• defina uma struct Aluno com:
■ nome do aluno
■ notas (vetor dinâmico)
• leia a quantidade de alunos n
• declare um array de structs Aluno de tamanho n
• para cada aluno:
■ leia o nome
■ leia a quantidade de notas
■ aloque dinamicamente as notas
■ leia as notas
• calcule e imprima:
■ a média de cada aluno
■ a média geral
• libere toda a memória ao final
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[50];
    int* vetnotas;
} Aluno;

int main() {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    Aluno *alunos = (Aluno *) malloc(n * sizeof(Aluno));
    int *qtdNotas = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", alunos[i].nome);

        printf("Digite o numero de notas do aluno %d: ", i + 1);
        scanf("%d", &qtdNotas[i]);

        alunos[i].vetnotas = (int *) malloc(qtdNotas[i] * sizeof(int));

        for (int j = 0; j < qtdNotas[i]; j++) {
            printf("Digite a nota %d do aluno %s: ", j + 1, alunos[i].nome);
            scanf("%d", &alunos[i].vetnotas[j]);
        }
    }

    float mediaGeral = 0;

    for (int i = 0; i < n; i++) {
        float soma = 0;
        for (int j = 0; j < qtdNotas[i]; j++)
            soma += alunos[i].vetnotas[j];

        float mediaAluno = soma / qtdNotas[i];
        printf("Media do aluno %s: %.2f\n", alunos[i].nome, mediaAluno);
        mediaGeral += mediaAluno;
    }

    printf("Media geral: %.2f\n", mediaGeral / n);

    for (int i = 0; i < n; i++){
        free(alunos[i].vetnotas);
    }
    free(alunos);
    free(qtdNotas);

    return 0;
}