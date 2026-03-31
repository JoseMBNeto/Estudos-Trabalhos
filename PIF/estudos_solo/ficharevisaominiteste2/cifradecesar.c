#include <stdio.h>

char *cifra (char *str, int deslocamento){
    char *inicio = str;

    while (*str != '\0'){
            *str = *str + deslocamento;
            str++;
        }
    return inicio;
}

int main() {
    
    char texto[50];
    scanf("%50[^\n]", texto);
    int deslocamento = 0;
    scanf("%d", &deslocamento);

    char *res = cifra(texto, deslocamento); 
    printf("A modificacao apos cifra de cesar e: %s", res);


    return 0;
}