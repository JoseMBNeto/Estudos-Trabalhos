/*
Exercício 6 — Remover espaços da string

Crie uma função que:

receba uma string (char str)

remova todos os espaços ' ' da string

alterando a própria string (sem criar outro vetor)

🔹 Protótipo:
void removerEspacos(charstr);
*/

#include <stdio.h>

void removerEspacos (char *str){
    char *ler = str;
    char *esc = str;

    while (*ler != '\0'){
        if (*ler != ' '){
            *esc = *ler;
            esc++;
        }
        ler++;
    }

    *esc = '\0';
}


int main(){

    char str[] = "Vamos furar o pneu do professor de FDS";

    printf("String normal: %s\n", str);
    removerEspacos(str);
    printf("String sem espacos: %s\n", str);

}