//     Considerem o seguinte cenário:
//     Precisamos armazenar n números da sequência de Fibonacci em uma lista
//     n não é conhecido de antemão
//     Após o preenchimento, remova o primeiro elemento
//     Imprimir a lista antes e depois da operação
//     Discuta a respeito da alocação de memória
//     Compare com o resultado da atividade em array

// Bônus:

//     Apresente um programa em que dado uma lista encadeada simples, remova um elemento i indicado pelo usuário.
//     Imprima a lista antes e depois

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node *next;
}Node;

Node *criar_no (int valor){
    Node* novo = malloc(sizeof(Node));
    novo ->valor = valor;
    novo ->next = NULL;
    return novo;
}

void add_final(Node **head, int valor){
    Node* novo = criar_no(valor);
    if(*head == NULL){
        *head = novo;
    }else{
        Node* temporario = *head;
        while(temporario->next != NULL){
            temporario = temporario->next;
        }
        temporario->next = novo;
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

void remover_por_indice(Node **head, int i) {
    if (*head == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    Node* atual = *head;

    if (i == 0) {
        *head = atual->next;
        free(atual);
        return;
    }

    Node* anterior = NULL;
    int contador = 0;

    while (atual != NULL && contador != i) {
        anterior = atual;
        atual = atual->next;
        contador++;
    }

    if (atual == NULL) {
        printf("Posicao invalida!\n");
        return;
    }

    anterior->next = atual->next;
    free(atual);
}

int main() {
    Node *head = NULL;
    int n;
    int valor1=0, valor2=1, prox;
    
    printf("Digite o valor de casas fibonacci que voce quer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        add_final(&head, valor1);   
        
        prox = valor1 + valor2;     
        valor1 = valor2;            
        valor2 = prox;
    }

    printf("Lista antes da remocao do primeiro elemento:\n");
    imprime(head);
    
    Node* primeiro = head;
    head = head->next;
    free(primeiro);
    
    printf("Lista depois da remocao do primeiro elemento:\n");
    imprime(head);
    
    printf("Lista antes da remocao por indice:\n");
    imprime(head);
    
    int i;
    printf("Digite a posicao a remover: ");
    scanf("%d", &i);
    remover_por_indice(&head, i);
    
    printf("Lista depois da remocao por indice:\n");
    imprime(head);

    return 0;
}