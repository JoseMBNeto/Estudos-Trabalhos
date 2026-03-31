/*
Na biblioteca central, dois registros textuais precisam ser unidos em um único documento
contínuo. Porém, o sistema está em modo restrito e não permite o uso de funções prontas
da biblioteca de strings.
Escreva um programa em C que leia duas strings fornecidas pelo usuário, cada uma com
até 100 caracteres. Implemente uma função que receba duas strings e concatene a
segunda ao final da primeira, sem utilizar funções da biblioteca padrão (como ‘strcat’). A
string destino deve possuir espaço suficiente para armazenar o resultado final. O processo
deve ser feito utilizando aritmética de ponteiros.
Estrutura:
void concatenar(char *destino, char *origem);
Exemplo de Entrada:
Casa
Azul
Exemplo de Saída:
CasaAzul
Restrição: não utilizar funções prontas de manipulação de strings.
*/

#include <stdio.h>

void concatenar(char *destino, char *origem);

int main() {
    
    char texto1[200];
    scanf("%99[^\n]", texto1);

    char texto2[100];
    scanf(" %99[^\n]", texto2);

    printf("frases antes da concatenacao: %s  %s", texto1, texto2);
    concatenar(texto1, texto2);
    printf("frase concateada: %s", texto1);

    return 0;
}

void concatenar(char *destino, char *origem){

    while(*destino != '\0'){
        destino++;
    }

    while(*origem != '\0'){
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino = '\0';
}