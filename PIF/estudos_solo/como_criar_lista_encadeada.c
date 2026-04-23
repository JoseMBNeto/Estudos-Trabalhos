#include <stdio.h>
/*
Aula de como declarar listas encadeadas
*/

struct node {
    int valor;
    struct node *next; // referência a estrutura do mesmo tipo
};

struct node * head = NULL; // atribuindo que o head (valor que inicia) é igual a nulo
head = (struct node *)malloc (sizeof(struct node)); //alocação dinamica de uma struc
head -> valor =1;
head -> next=NULL; // primeiro elemento da lista

struc node * novo = (struc node *)malloc(sizeof(struc node));
novo->valor =2; //array [1]=2
novo->next = NUll; //segundo elemento da lista
head->next = novo;