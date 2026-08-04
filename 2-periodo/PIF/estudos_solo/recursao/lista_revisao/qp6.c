/*
Dada a estrutura:
struct node { int valor; struct node *next; };
Implemente recursivamente a função int tamanho(struct node *head) que retorna o
número de nós da lista. Não use laços.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
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

int tamanho(Node*head){
    if(head == NULL) return 0;
    else{
        return 1 + tamanho(head->next);
    }
}

int main() {
    
    return 0;
}