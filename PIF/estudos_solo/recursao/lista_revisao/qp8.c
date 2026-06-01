/*
Usando a mesma estrutura da Q6, implemente recursivamente a função int
buscaLista(struct node *head, int x) que retorna 1 se x estiver na lista e 0 caso
contrário. Não use laços.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int valor;
    struct node *next;
}Node;

Node* criar_node(int valor){
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

int tamanho(Node*head){
    if(head == NULL) return 0;
    else{
        return 1 + tamanho(head->next);
    }
}

int somaLista (Node*head){
    if(head == NULL) return 0;
    else{
        return head->valor + somaLista(head->next);
    }
}

int buscaLista (Node*head, int x){
    if(head == NULL) return 0;
    else{
        if (head->valor == x) return 1;
        else{
            return buscaLista(head->next, x);
        }
    }
}

int main() {
    
    return 0;
}