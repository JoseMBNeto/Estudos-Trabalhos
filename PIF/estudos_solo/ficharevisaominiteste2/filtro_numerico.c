#include <stdio.h>

int extrairDigito ( char *origem, char *destino){
    int contador = 0; 

    while(*origem != '\0'){
        if (*origem >= '0' && *origem <= '9'){
            *destino = *origem;
            destino++;
            contador++;
            origem++;
        }else{
            origem++;
        }
    }
    *destino = '\0';

    return contador;

}

int main() {

    char texto[50];
    scanf("%49[^\n]", texto);
    char valorCorreto[50];  

    int res = extrairDigito(texto, valorCorreto);
    printf("Numeros filtrados: %s\n", valorCorreto);
    printf("Digitos numericos copiados: %d\n", res);


    return 0;
}