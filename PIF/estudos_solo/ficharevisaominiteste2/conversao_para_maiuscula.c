#include <stdio.h>

void paraMaiuscula (char *str){

    while(*str != '\0'){
        if (*str >= 'a' && *str <= 'z'){
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main() {

    char texto[50];
    scanf("%49[^\n]", texto);

    printf("frase original: %s\n", texto);
    paraMaiuscula(texto);
    printf("Frase em maiuscula: %s\n", texto);

    return 0;
}