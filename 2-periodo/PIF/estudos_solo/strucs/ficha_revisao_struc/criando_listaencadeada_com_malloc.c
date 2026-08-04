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

int main(){
    Node* head = createNode(10);
    Node* novo = createNode(20);
    head->next = novo;
    novo = createNode(30);
    head->next->next = novo;
    
    Node* temp = head;
    while (temp != NULL){
        printf("%d,", temp->valor);
        temp = temp->next;
    }
}