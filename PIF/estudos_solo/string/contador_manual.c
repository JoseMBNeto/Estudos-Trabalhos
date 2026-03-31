#include <stdio.h>

int tamanhoString( char *str);

int main(){

    char texto[50];
    scanf("%50[^\n]", texto);  //Versão para escrever e armazenar na char
    //char texto[] = "Quero chocolate"; Versão com string já escrita

    printf("String: %s\n", texto);
    int resp = tamanhoString(texto);
    printf("Quantidade de caracteres da string: %d", resp);

    return 0;
}

int tamanhoString( char *str){
    char *inicio = str;
    int cont = 0;

    while (*inicio !='\0'){
        inicio++;
        cont++;
    }
    return cont;
}

