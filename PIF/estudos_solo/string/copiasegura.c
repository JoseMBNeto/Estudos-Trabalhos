#include <stdio.h>

void copiasafe(char *destino, char *origem);

int main() {
    
    char origem[] = "Cafeeeeeeeee";
    char destino[50];

    copiasafe(destino, origem);

    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);
    
    
    return 0;
}


void copiasafe(char *destino, char *origem){

    while(*origem != '\0'){
        *destino = *origem;
        destino++;
        origem++;
    }

    *destino = '\0';

}
