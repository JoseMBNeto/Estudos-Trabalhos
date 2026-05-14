/*
Encontrar o Nó do Meio da Lista
Implemente struct node* encontra_meio(struct node *head) que retorna um ponteiro para o nó do meio da lista. Se
houver um número par de nós, retorne o primeiro do par central.
Exemplo: Lista: 1 → 2 → 3 → 4 → 5 → NULL. Retorna ponteiro para o nó 3. Para par: 1 → 2 → 3 → 4 → NULL retorna
2.
■ Dica: Use dois ponteiros, um avança 1 nó, outro avança 2 nós. Quando o rápido chegar ao fim, lento está no meio.
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

Node* encontra_meio (Node**head){ //10 20 30 40 50 60
    Node* rapido = *head;
    Node* lento = *head;
    if(*head == NULL){
        printf("Lista vazia\n");
    }else{
        while (rapido->next != NULL && rapido->next->next != NULL){
            rapido = rapido->next->next;
            lento = lento->next;
        }
    }
    return lento;
}

void imprime (Node*head){
    Node* temp = head;
    if(head == NULL){
        printf("Lista vazia\n");
    }else{
        printf("Lista: ");
        while(temp != NULL){
            printf("%d ", temp->valor);
            temp = temp->next;
        }
    }
    printf("\n");
}

int main() {
    Node *head = NULL, *resultado = NULL;

    add(&head, 10);
    add(&head, 20);
    add(&head, 30);
    add(&head, 40);
    add(&head, 50);

    resultado = encontra_meio(&head);
    imprime(head);
    printf("%d ", resultado->valor);
    printf("\n");

    add(&head, 60);

    resultado = encontra_meio(&head);
    imprime(head);
    printf("%d ", resultado->valor);
    printf("\n");

    return 0;
}