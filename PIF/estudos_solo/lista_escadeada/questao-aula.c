#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node* next;
}Node;

Node *criar_node (int valor){
    Node* novo = malloc(sizeof(Node));
    novo-> valor = valor;
    novo->next = NULL;
    return novo;
}

void add_inic (Node**head, int valor){
    Node* novo = criar_node(valor);
    novo->next = *head;
    *head = novo;
}

void add_fim (Node** head, int valor){
    Node* novo = criar_node(valor);
    if (*head == NULL){
        *head = novo;
    }else{
        Node* aux = *head;
        while (aux->next != NULL){
            aux = aux->next;
        }
        aux->next = novo;
    }
}

void remover_dupli (Node** head){ // 10 20 30 20
    if (*head == NULL || (*head)->next == NULL){
        return;
    }else{
        Node* atual = *head;
        Node* aux = *head;
        Node* temp = NULL;
        
        while (atual != NULL){
            aux = atual;
            while (aux != NULL){
                if(aux->next != NULL && atual->valor == aux->next->valor){
                    temp = aux->next;
                    aux ->next = aux->next->next;
                    free(temp);
                }else{
                aux = aux->next;
                }
            }
            atual = atual->next;
        }
    }
    
}

void imprimir (Node** head){
    if ((*head)->next == NULL){
        printf("%d", (*head)->valor);
    }else{
        Node* aux = *head;
        printf("Lista: ");
        while(aux != NULL){
            printf("%d ", aux->valor);
            aux = aux->next;
        }
    }
}

int main()
{
    Node* head = NULL;
    int numero =0;
    char digitado;
    
    do{
        printf("Digite o que voce quer fazer: \n(T) Terminar \n(I) Adicionar no inicio \n(F) Adicionar no fim\n");
        scanf(" %c", &digitado);
        if(digitado == 'I' || digitado == 'i'){
            printf("Digite o numero a ser adicionado no inicio da lista: \n");
            scanf("%d", &numero);
            add_inic(&head ,numero);
        }
        if (digitado == 'F' || digitado == 'f'){
            printf("Digite o numero a ser adicionado no final da lista: \n");
            scanf("%d", &numero);
            add_fim(&head, numero);
        }
        
    }while(digitado != 'T');
    
    remover_dupli(&head);
    imprimir(&head);

    return 0;
}