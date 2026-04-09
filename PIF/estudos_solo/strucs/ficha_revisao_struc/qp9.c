/*
Defina as structs abaixo:
typedef struct {
char nome[50];
float preco;
} Produto;

typedef struct {
Produto itens[5];
int quantidade;
} Pedido;

Implemente as funções:
● float valor_total_pedido(Pedido p);
● int pedido_mais_caro(Pedido v[], int n);
A função valor_total_pedido deve:
● receber uma struct do tipo Pedido;
● retornar a soma dos preços dos produtos do pedido.
A função pedido_mais_caro deve:
● receber um vetor de Pedido e um inteiro n;
● retornar a posição do pedido com maior valor total.
Considere que:
● em caso de empate, deve ser retornada a primeira posição encontrada.
Implemente uma função main() que:
1. leia um inteiro n;
2. declare um vetor de Pedido com n posições;
3. leia os dados de cada pedido (quantidade e produtos);
4. chame a função pedido_mais_caro;
5. imprima o valor total do pedido encontrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
}Produto;

typedef struct{
    Produto itens[5];
    int quantidade;
}Pedido;

float valor_total_pedido (Pedido p){
    float total =0; 

    for (int i=0; i<p.quantidade; i++){
        total += p.itens[i].preco;
    }
    return total;
}

int pedido_mais_caro (Pedido vet[], int n){
    float mais_caro = valor_total_pedido(vet[0]);
    int ind_caro=0;
    
    for (int i=1;i<n;i++){
        float atual = valor_total_pedido(vet[i]);
        if (atual > mais_caro){
            mais_caro = atual;
            ind_caro =i;
        }
    }
    return ind_caro;
}

int main() {
    int n;
    printf("Digite o numero de pedido: ");
    scanf("%d", &n);

    Pedido vet[n];

    for( int i=0;i<n;i++){
     printf("Quantos produtos no pedido %d? ", i+1);
     scanf("%d", &vet[i].quantidade);   
     
     
     for (int j=0;j<vet[i].quantidade; j++){
        printf("Digite o nome do produto %d: ", j+1);
        scanf(" %49[^\n]", vet[i].itens[j].nome);

        printf("Preco do produto %d: ", j+1);
        scanf("%f", &vet[i].itens[j].preco);
 
     }
    }

    int caro = pedido_mais_caro(vet,n);
    float valor = valor_total_pedido(vet[caro]);
    printf("O valor total do pedido mais caro %.2f\n", valor);

    return 0;
}