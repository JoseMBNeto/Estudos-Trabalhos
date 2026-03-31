#include <stdio.h>

int remove_ocorrencias(char *str, char *alvo);

int main() {
    char str[100];
    scanf("%99[^\n]",str);

    char alvo;
    scanf(" %c",&alvo);

    int resultado = remove_ocorrencias(str,alvo);
    printf("\n%d", resultado);
    printf("\n%s",str);

    return 0;
}

int remove_ocorrencias(char *str, char *alvo){
    char ler = str;
    char *escrever = str;
    int contador = 0;

    while (ler != '\0'){
        if(ler != alvo){
            escrever =ler;
            escrever++;
        }else{
            contador++;

        }
        ler++;
    }
    *escrever = '\0';


    return contador;
}