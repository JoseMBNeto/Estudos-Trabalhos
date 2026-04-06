/*
Crie uma função char* clonar_string(char* s) que meça o tamanho da string s, aloque exatamente a
quantidade de memória necessária (incluindo o caractere nulo \0) e copie o conteúdo. O programa principal
deve liberar a memória após o uso.v
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* clonar_string(char* s){
    
    char *str_fim = (char *) malloc ((strlen(s) + 1) * sizeof(char));
    char *inicio = str_fim;
    
    while (*s != '\0'){
        *str_fim = *s;
        s++;
        str_fim++;
    }
    *str_fim = '\0';

    return inicio;
}

int main() {

    char str[50];
    scanf("%49[^\n]", str);

    char *resp = clonar_string(str);
    printf("%s", resp);

    free(resp);
    resp = NULL;

    return 0;
}