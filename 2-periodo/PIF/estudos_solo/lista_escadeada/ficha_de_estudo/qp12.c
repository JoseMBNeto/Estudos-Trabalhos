/*
Inverter a Ordem da Lista
Crie a função void inverte_lista(struct node **head) que reverte a ordem dos nós invertendo os apontadores next. A
operação é in-place.
Exemplo: Lista: 1 → 2 → 3 → NULL. Após inverte_lista(&head;) → 3 → 2 → 1 → NULL
■ Dica: Use três ponteiros: anterior, atual e próximo. Inverta o apontador a cada passo: atual->next = anterior.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    struct Node *next;
    int valor;
}Node;

Node* criar_node (int valor){
    Node* novo = malloc(sizeof(Node));
    novo->valor = valor;
    novo->next = NULL;
    return novo;
}

void add (Node**head, int valor){
    Node* novo = criar_node(valor);
    if (*head == NULL){
        *head = novo;
    }else{
        Node* temp = *head;
        while (temp->next != NULL){
            temp = temp->next;
        } 
        temp->next = novo;
    }
}

void inverte_lista(Node**head){ // 1->2->3->NULL || 3->2->1->NULL
    Node* atual = *head;
    Node* proximo = NULL;
    Node* anterior = NULL;
    if(*head == NULL){
        printf("Lista vazia\n");
    }else{
        while(atual != NULL){
            proximo = atual->next;
            atual->next = anterior;
            anterior = atual;
            atual = proximo;
        }
        *head = NULL;
    }
}

void imprimir (Node**head){
    if(*head == NULL){
        printf("Lista vazia\n");
    }else{
        printf("Valores: ");
        while(*head != NULL){
            printf("%d ", (*head)->valor);
            *head = (*head)->next;
        }
    }
    printf("\n");
}

int main() {

    
    return 0;
}