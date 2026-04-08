/*
Defina uma struct chamada Aluno contendo:
● char nome[50]
● float notas[4]
Implemente uma função chamada media_turma. A função deve receber como parâmetros:
● um vetor de structs do tipo Aluno;
● um inteiro n
A função deve retornar:
● a média geral da turma
Considere que:
● a média de cada aluno é a média das 4 notas.
Protótipo da função:
float media_turma(Aluno v[], int n);
Implemente uma função main() que:
1. leia um inteiro n;
2. declare um vetor de Aluno com n posições;
3. leia o nome e as 4 notas de cada aluno;
4. chame a função media_turma;
5. imprima a média da turma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
    char nome[50];
    float notas[4];
}Als;

float media_turma(Als vet[], int n){
    float mediaT, mediaAlunos=0;
    
    for (int i=0;i<n;i++){
        float somaAluno=0;
        for (int j=0;j<4;j++){
            somaAluno += vet[i].notas[j];
        }
        mediaAlunos += somaAluno / 4;
    }
    mediaT = mediaAlunos / n;

    return mediaT;
}

int main() {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    Als vet[n];

    for (int i=0;i<n;i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %49[^\n]", vet[i].nome);

        printf("Digite as 4 notas do aluno %d: ", i+1);
        scanf("%f %f %f %f", &vet[i].notas[0], &vet[i].notas[1], &vet[i].notas[2], &vet[i].notas[3]);
    }

    float r = media_turma(vet, n);
    printf("A media da turma foi: %.2f\n", r);
    


    return 0;
}