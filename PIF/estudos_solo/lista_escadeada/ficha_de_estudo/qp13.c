/*
Mesclar Duas Listas Ordenadas
Implemente struct node* mescla_ordenada(struct node *l1, struct node *l2) que recebe duas listas ordenadas e
retorna uma única lista ordenada contendo todos os nós, sem criar novos nós (apenas rearranja).
Exemplo: l1: 1 → 3 → 5 → NULL, l2: 2 → 4 → 6 → NULL → resultado: 1 → 2 → 3 → 4 → 5 → 6 → NULL
■ Dica: Compare valores de l1 e l2, escolha o menor, conecte e avance o respectivo ponteiro. Trate sobras ao fim.
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
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = novo;
    }
}

Node* mescla_ordenada(Node* l1, Node* l2){
    Node* head = criar_node(l1->valor);
    Node* aux = head;
    l1 = l1->next;
    while (l1 != NULL || l2 != NULL){
        if(l2 != NULL){
            aux->next = criar_node(l2->valor);
            aux = aux->next;
            l2 = l2->next;
        }

        if (l1 != NULL){
            aux->next = criar_node(l1->valor);
            aux = aux->next;
            l1 = l1->next;
        }
    }
    return head;
}

void imprime(Node*head){
    if(head==NULL){
        printf("Lista vasia");
    }else{
        while (head != NULL){
            printf("%d ", head->valor);
            head = head->next;
        }
    }
    printf("\n");
}

int main() {
    Node *l1 = NULL, *l2 = NULL, *resultado = NULL;

    add(&l1, 30);
    add(&l1, 40);
    add(&l1, 50);
    imprime(l1);

    add(&l2, 60);
    add(&l2, 70);
    add(&l2, 80);
    imprime(l2);

    resultado = mescla_ordenada(l1, l2);
    imprime(resultado); 
    
    return 0;
}