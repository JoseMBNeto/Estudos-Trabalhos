#include <stdio.h>

int comprimento (char *str){
    int contador = 0;
    while (*str != '\0'){
        str++;
        contador++;
    }

    return contador;
}

int main() {
    
    char texto[100];
    scanf("%99[^\n]", texto);

    int res = comprimento(texto);
    printf("O comprimento do pergaminho e %d caracteres", res);

    return 0;
}