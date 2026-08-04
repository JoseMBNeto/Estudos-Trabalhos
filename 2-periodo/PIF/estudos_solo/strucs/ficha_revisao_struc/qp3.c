/*
Defina uma struct chamada Produto contendo:
● char nome[50]
● float preco
● int quantidade
Implemente uma função chamada buscar_produto_mais_caro.
A função deve receber como parâmetros:
● um vetor de structs do tipo Produto;
● um inteiro n, representando a quantidade de produtos no vetor.
A função deve retornar:
● a posição do produto com maior preço no vetor.

Considere que:
● se houver empate, deve ser retornada a primeira posição encontrada.
Protótipo da função:
int buscar_produto_mais_caro(Produto v[], int n);
Implemente uma função main() que:
1. leia um inteiro n;
2. declare um vetor de Produto com n posições;
3. leia os dados de todos os produtos;
4. chame a função buscar_produto_mais_caro;
5. imprima o nome, o preço e a quantidade do produto encontrado.
*/

typedef struct Produto{
    char nome[50];
    float preco;
    int quantidade;
}Prod;

int buscar_produto_mais_caro (Prod vet[], int n){
    int ind_maior = 0;
    float maior_preco = vet[0].preco;

    for (int i=0;i<n;i++){
        float preco_atual = vet[i].preco;
        if(preco_atual > maior_preco){
            maior_preco = preco_atual;
            ind_maior = i;
        }
    }
    return ind_maior;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Digite a quantos produtos existem: ");
    scanf("%d", &n);

    Prod vet[n];

    for (int i=0;i<n;i++){

        printf("Qual o nome do produto? ");
        scanf(" %49[^\n]", vet[i].nome);

        printf("Qual o preco do produto? ");
        scanf("%f", &vet[i].preco);

        printf("Qual a quantidade do produto? ");
        scanf("%d", &vet[i].quantidade);
    }

    int r= buscar_produto_mais_caro(vet, n);

    printf("Produto mais caro: %s\n", vet[r].nome);
    printf("Preco: R$ %.2f\n", vet[r].preco);
    printf("Quantidade: %d\n", vet[r].quantidade);

    
    return 0;
}