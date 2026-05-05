/*
Buscar um Valor na Lista
Implemente struct node* busca(struct node *head, int valor) que busca um nó com um valor específico e retorna um
ponteiro para ele, ou NULL se não encontrar.
Exemplo: Lista: 5 → 10 → 15 → NULL. busca(head, 10) retorna ponteiro para o nó com 10.
■ Dica: Percorra a lista e compare *aux->valor com o valor procurado.
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

Node* busca(Node**head, int valor){
    Node *temp = *head;
    if(*head == NULL){
        return NULL;
    }else{
    while (temp != NULL && temp->valor != valor){
        temp = temp->next; 
    }
    return temp;
    }
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
    
    Node* res = busca(&head, 10);
    if (res == NULL){
        printf("Não encontrado");
    } else{
        printf("Valor: %d\nEndereco de memoria: %p\n", res->valor, res);
    }

    return 0;
}