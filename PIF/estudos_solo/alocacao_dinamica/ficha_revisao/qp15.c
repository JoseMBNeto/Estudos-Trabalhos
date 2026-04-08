/*
Crie um programa que armazene uma lista de nomes (strings). O usuário diz quantos nomes quer digitar.
Como cada nome tem um tamanho diferente, você deve alocar um char **lista, onde cada lista[i] deve ser
alocado com o tamanho exato de cada nome lido (use malloc e strlen).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n;
    printf("Quantos nomes voce quer digitar? ");
    scanf("%d", &n);
    
    char **lista = (char **) malloc (n * sizeof(char*)); 
    char nome[50];
    
    for (int i=0;i<n;i++){
        scanf(" %49[^\n]", nome);
        int temp = strlen(nome) + 1;
        lista[i] = (char *) malloc (temp * sizeof(char));
        strcpy(lista[i], nome);
    }

    printf("Valores armazenados na lista: \n");
    for (int i=0;i<n;i++){
        printf("%s\n", lista[i]);
    }


    for(int i=0;i<n;i++){
        free(lista[i]);
    }
    free(lista);


    return 0;
}