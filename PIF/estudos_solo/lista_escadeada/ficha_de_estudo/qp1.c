/*
1. Criar e Inicializar uma Lista Vazia
Implemente a função void inicializa_lista(struct node **head) que recebe um ponteiro de ponteiro para head e o
inicializa como NULL (lista vazia). A função deve apenas garantir que a lista está pronta para uso.
Exemplo: Após a chamada, head aponta para NULL, indicando lista vazia.
■ Dica: Simplesmente atribua NULL ao endereço apontado por *head.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int valor;
    struct Node *next;
}Node;

void inicializa_lista(Node **head){
    *head = NULL;
}

int main() {
    Node* head = NULL;
    
    inicializa_lista(&head);

    if(head == NULL){
        printf("Lista Vazia\n");
    }
    
    return 0;
}