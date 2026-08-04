/*
Exibir Todos os Nós da Lista
Implemente void exibe_lista(struct node *head) que percorre a lista e exibe o valor de cada nó. Trate o caso de lista
vazia com mensagem apropriada.
Exemplo: Lista: 10 → 20 → 30 → NULL. Saída: 10 20 30 (um por linha)
■ Dica: Use um ponteiro auxiliar e um laço while(aux != NULL) para percorrer até o fim.
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

void adicionar(Node**head, int valor){
    Node* novo = criar_node(valor);
    if(*head == NULL){
        *head = novo;
    } else {
        Node* aux = *head;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = novo;
    }
}

void imprime(Node* head){
    if(head == NULL){
        printf("Lista Vazia!\n");
    } else {
        while (head != NULL){
            printf("%d \n", head->valor);
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

    imprime(head);
    
    
    return 0;
}