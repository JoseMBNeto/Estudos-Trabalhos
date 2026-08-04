/*
Contar o Número de Nós
Crie a função int conta_nos(struct node *head) que retorna a quantidade de nós presentes na lista.
Exemplo: Lista com 5 nós → retorna 5. Lista vazia → retorna 0.
■ Dica: Inicialize um contador em zero e incremente a cada nó percorrido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int valor;
    struct Node *next;
}Node;

Node *criar_node(int valor){
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->valor = valor;
    temp->next = NULL;

    return temp;
}

void adicionar(Node **head, int valor){
    Node* novo = criar_node(valor);
    if (*head == NULL){
        *head = novo;
    } else{
        Node* temp = *head;
        while (temp->next != NULL){
           temp = temp->next;
        }
        temp->next = novo;
    }
}

int conta_nos(Node** head){
    int contador = 0;
    Node* temp = *head;

    while( temp != NULL){
        contador++;
        temp = temp->next;
    }
    return contador;
}

void imprime(Node* head){
    if(head == NULL){
        printf("Lista Vazia!\n");
    } else {
        while (head != NULL){
            printf("%d ", head->valor);
            head = head->next;
        }
    }
    printf("\n");
}

int main() {
    Node *head = NULL;

    criar_node(10);
    adicionar(&head, 10);
    adicionar(&head, 20);
    adicionar(&head, 30);

    int ret = conta_nos(&head);
    printf("Nos = %d\n", ret);
    imprime(head);

    return 0;
}