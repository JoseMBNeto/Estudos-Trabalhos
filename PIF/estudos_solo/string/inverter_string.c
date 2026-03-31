#include <stdio.h>

/*
inverter string (sem vetor auxiliar)
void inverter(char *str);

Regras:

Não utilizar str[i]

Não criar outro vetor auxiliar

A inversão deve ser feita diretamente na string original

Utilize apenas ponteiros para percorrer e modificar a string

📌 Exemplo:
Entrada:  "programa"
Saída:    "amargorp"
*/

void inverter(char *str);

int main(){

    char texto[] = "programa";
    printf("String original: %s\n", texto);
    inverter(texto);
    printf("String invertida: %s\n", texto);

    return 0;
}

void inverter(char *str){
    char *iniciop = str;
    char *fimp = str;

    while(*fimp !='\0'){
        fimp++;
    }
    fimp--;

    while(iniciop < fimp){
        char temp = *iniciop;
        *iniciop = *fimp;
        *fimp = temp;

        iniciop++;
        fimp--;

        }

}