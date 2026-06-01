/*
Escreva um programa em C que leia um arquivo de texto chamado numeros.txt contendo um
inteiro por linha, armazene os valores em uma lista encadeada e, usando uma função recursiva,
grave em um novo arquivo invertido.txt os mesmos valores na ordem inversa (do último para
o primeiro nó da lista). Você pode assumir que o arquivo existe e tem no máximo 100 linhas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int valor;
    struct node *next;
}Node;

Node* criar_node(int valor){
    Node* novo = malloc(sizeof(Node));
    novo->valor = valor;
    novo->next = NULL;

    return novo;
}

void add (Node**head, int valor){
    Node* novo = criar_node(valor);
    if(*head == NULL){
        *head = novo;
    }else{
        Node* temp = *head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = novo;
    }
}

void gravaInvertido(Node* head, FILE* saida){
    if(head == NULL) return;
    gravaInvertido(head->next, saida);
    fprintf(saida, "%d\n", head->valor);
}

int main() {

    Node* head = NULL;

    FILE* entrada = fopen("numeros.txt", "r");
    int valor;
    while(fscanf(entrada, "%d", &valor) == 1){
        add(&head, valor);
    }
    fclose(entrada);

    FILE* saida = fopen("invertido.txt", "w");
    gravaInvertido(head, saida);
    fclose(saida);



    return 0;
}