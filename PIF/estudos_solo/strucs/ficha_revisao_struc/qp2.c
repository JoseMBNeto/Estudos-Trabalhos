/*
Defina uma struct chamada Aluno contendo:
● char nome[50]
● float nota1
● float nota2
● float nota3
Implemente uma função chamada calcular_media_aluno. A função deve receber como
parâmetro:
● uma struct do tipo Aluno

A função deve retornar a média aritmética das três notas do aluno.
Implemente uma função chamada buscar_melhor_aluno. A função deve receber como
parâmetros:
● um vetor de structs do tipo Aluno
● um inteiro n
A função deve retornar o índice do aluno com maior média. Em caso de empate, retorne o
primeiro encontrado.
Protótipos:
float calcular_media_aluno(Aluno a);
int buscar_melhor_aluno(Aluno v[], int n);
Implemente uma função main() que:
1. leia um inteiro n;
2. declare um vetor de Aluno com n posições;
3. leia o nome e as três notas de cada aluno;
4. chame buscar_melhor_aluno;
5. imprima o nome e a média do aluno encontrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
}Al;

float calcular_media_aluno (Al a){
    float media;

    media = ((a.nota1 + a.nota2 + a.nota3) / 3);
    return media;
}

int buscar_melhor_aluno (Al vet[], int n){
    int ind_melhor=0;
    float maiorMedia = calcular_media_aluno(vet[0]);

    for (int i=1;i<n;i++){
        float mediaAtual = calcular_media_aluno(vet[i]);
        if (mediaAtual > maiorMedia){
            maiorMedia = mediaAtual;
            ind_melhor = i;
        }
    }
    return ind_melhor;
}


int main() {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    Al vet[n];

    for (int i=0;i<n;i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %49[^\n]", vet[i].nome);

        printf("Digite a nota 1: ");
        scanf("%f", &vet[i].nota1);
        
        printf("Digite a nota 2: ");
        scanf("%f", &vet[i].nota2);
        
        printf("Digite a nota 3: ");
        scanf("%f", &vet[i].nota3);

    }

    int melhor = buscar_melhor_aluno(vet, n);
    float media = calcular_media_aluno(vet[melhor]);
    printf("Melhor aluno: %s\n", vet[melhor].nome);
    printf("Media: %.2f\n", media);
    
    return 0;
}