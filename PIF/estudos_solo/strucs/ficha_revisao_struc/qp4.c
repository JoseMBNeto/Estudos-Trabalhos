/*
Defina uma struct chamada Funcionario contendo:
● char nome[50]
● float salario_base
● float bonus
Implemente uma função chamada buscar_maior_total. A função deve receber como
parâmetros:
● um vetor de structs do tipo Funcionario;
● um inteiro n
A função deve retornar:
● a posição do funcionário com maior salário total (salario_base + bonus)
Considere que:
● em caso de empate, deve ser retornada a primeira posição encontrada.
Protótipo da função:
int buscar_maior_total(Funcionario v[], int n);
Implemente uma função main() que:

1. leia um inteiro n;
2. declare um vetor de Funcionario com n posições;
3. leia os dados de todos os funcionários;
4. chame a função buscar_maior_total;
5. imprima o nome e o salário total do funcionário encontrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Funcionario{
    char nome[50];
    float salario_base;
    float bonus;
}Fun;

int buscar_maior_total (Fun vet[],int n){
    int ind_maior =0;
    float maior_total = (vet[0].salario_base + vet[0].bonus);

    for (int i=0;i<n;i++){
        float maior_atual = (vet[i].salario_base + vet[i].bonus);
        if (maior_atual > maior_total){
            maior_total = maior_atual;
            ind_maior =i;
        }
    }
    return ind_maior;
}

int main() {
    int n;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &n);

    Fun vet[n];

    for(int i=0;i<n;i++){
        printf("Digite o nome do funcionario %d: ", i+1);
        scanf(" %49[^\n]", vet[i].nome);

        printf("Digite o salario do funcionario %d: ", i+1);
        scanf("%f", &vet[i].salario_base);

        printf("Digite o bonus do funcionario %d: ", i+1);
        scanf("%f", &vet[i].bonus);
    }

    int r = buscar_maior_total(vet, n);

    printf("O funcionario com maior salario e: %s\n", vet[r].nome);
    printf("Salario base: %4.f\n", (vet[r].salario_base + vet[r].bonus));
    
    
    return 0;
}