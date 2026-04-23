#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node *next;
}Node;

Node* createNode(int valor){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->valor = valor;
    temp->next = NULL;
    return temp;
}

void add(Node** head,int valor){
    *head = createNode(valor);
}

int main(){
    Node* head = NULL;
    add(&head, 10);
    
    Node* temp = head;
    while (temp != NULL){
        printf("%d,", temp->valor);
        temp = temp->next;
    }
}