#include <stdio.h>

char *buscar(char *str, char caracter);

int main(){

    char texto[50] = "Eu quero cafe";
    char *ptexto = buscar(texto, 'r');

    printf("String completa: %s\n", texto);
    printf("String após o r: %s\n", ptexto);

    return 0;
}

char *buscar(char *str, char caracter){

    while (*str != caracter && *str != '\0'){
        str++;
    }

    if (*str !='\0'){
        return str;
    }else{
        return NULL;
    }

}