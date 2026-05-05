/*
Adicionar um Nó ao Início da Lista
Crie a função void adiciona_inicio(struct node **head, int valor) que insere um novo nó com um valor inteiro no início
da lista. O novo nó deve se tornar o head.
Exemplo: head = NULL → após adiciona_inicio(&head;, 10) → head aponta para nó com valor 10 → NULL
■ Dica: Aloque memória, atribua o valor, faça next apontar para head atual, depois atualize head.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node{
    int valor;
    struct Node* next;
}Node;

Node *criar_node(int valor){
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->valor = valor;
    temp->next = NULL;
    
    return temp;
}

void adicionar_inicio(Node**head, int valor){
    Node* novo = criar_node(valor);
    novo->valor = valor;
    novo->next = *head;
    *head = novo;
}

void imprime(Node **head){
    Node *temp = *head;
    while (temp != NULL){
        printf("%d ", temp->valor);
        temp = temp->next;
    }
}

int main() {
    Node *head = NULL;

    criar_node(10);
    adicionar_inicio(&head, 10);
    adicionar_inicio(&head, 20);
    adicionar_inicio(&head, 30);

    imprime(&head);
    
    
    return 0;
}