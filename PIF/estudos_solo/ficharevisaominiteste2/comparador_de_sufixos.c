#include <stdio.h>

int compara_sufixo(char *str, char *sufixo);

int main() {
    
    char texto[50];
    scanf("%49[^\n]", texto);

    char sufixo[50];
    scanf(" %49[^\n]", sufixo);

    int res = compara_sufixo(texto, sufixo);
    printf("%d", res);

    return 0;
}

int compara_sufixo(char *str, char *sufixo){

    char *fimStr = str;
    char *fimSuf = sufixo;

    while (*fimStr != '\0'){
        fimStr++;
    }

    while (*fimSuf != '\0'){
        fimSuf++;
    }

    fimStr--;
    fimSuf--;

    while (fimSuf >= sufixo){
        if (*fimStr != *fimSuf){
            return 0;
        }
        fimStr--;
        fimSuf--;
    }
    return 1;
}