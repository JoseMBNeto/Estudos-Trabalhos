#include <stdio.h>

/*
Um sistema de inteligência precisa verificar se uma palavra-chave secreta aparece em um
documento maior. A palavra pode surgir logo no início, no meio ou no final do texto — e sua
função deve ser capaz de encontrá-la em qualquer posição.
Escreva um programa em C que leia duas strings: uma string principal e uma substring.
Crie uma função que verifique se a substring aparece em qualquer posição da string
principal.
Exemplos:
"programacao" e "pro" → 1
"programacao" e "grama" → 1
"programacao" e "acao" → 1
"ponteiro" e "teia" → 0
A função deve retornar:
● 1 se a substring estiver contida na string principal
● 0 caso contrário
Estrutura:
int contemSubstring(char *str, char *sub);
Dica: percorra a string principal e, em cada posição, tente verificar se a substring
começa ali.
*/

int contemSubstring(char *str, char *sub);

int main() {
    
    char texto1[50];
    scanf("%49[^\n]", texto1);

    char subtexto[50];
    scanf(" %49[^\n]", subtexto);

    int res = contemSubstring(texto1, subtexto);
    printf("%d", res);

    return 0;
}

int contemSubstring(char *str, char *sub){
    
    int contador;
    int tamanho=0;

    while(str[tamanho] != '\0' && str[tamanho] != '\n'){
        tamanho++;
    }

    int tamsub=0;
    while(sub[tamsub] != '\0' && sub[tamsub] != '\n'){
        tamsub++;
    }

    for (int i = 0; i <= tamanho - tamsub; i++){
        contador=0;
        for(int j=0;j<tamsub;j++){
            if(*(sub+j) == *(str+j+i)){
                contador++;
            }
        }
        if(contador==tamsub){
            return 1;
        }
    }
    return 0;
}