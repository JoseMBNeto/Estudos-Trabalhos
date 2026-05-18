/*
Remover um Nó Específico pelo Valor
Implemente void remove_valor(struct node **head, int valor) que remove a primeira ocorrência de um nó com um
valor específico. Se não encontrar, não faça nada. Trate o caso de remover o head.
Exemplo: Lista: 10 → 20 → 30 → 20 → NULL. remove_valor(&head;, 20) remove apenas a primeira ocorrência → 10 →
30 → 20 → NULL
■ Dica: Use um ponteiro anterior para poder desconectar o nó. Se remove head, use **head diretamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int valor;
    struct Node *next;
}Node;

Node* criar_node (int valor){
    Node* novo = malloc (sizeof(Node));
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
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = novo;
    }
}

void imprime (Node**head){
    if (*head == NULL){
        printf("Lista vazia!\n");
    }else{
        while (*head != NULL){
            printf("%d ", (*head)->valor);
            *head = (*head)->next;
        }
    }
}

void remover (Node**head, int valor){
    Node* anterior = NULL;
    Node* atual = *head;
    if (*head == NULL){
        printf("Lista vazia!\n");
    }

    if(atual->valor == valor){
        *head = atual->next;
        free(atual);
        return;
    }

    while(atual != NULL && atual->valor != valor){
        anterior = atual;
        atual = atual->next;
    }

    if (atual == NULL){
        printf("O valor nao existe!");
    }

    anterior->next = atual->next;
    free(atual);
}


int main() {
    
    return 0;
}