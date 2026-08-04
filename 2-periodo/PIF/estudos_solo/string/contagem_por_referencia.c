#include <stdio.h>

void conta_caracter (char *str, int *vog, int *cons){

    while(*str !='\0'){
        if (*str >= 'a' && *str <= 'z'){
            if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'){
            (*vog)++;
            }else{
            (*cons)++;
            }
        } 

        str++;
    }
}

int main() {
    char texto[50];
    int vog = 0, cons = 0;

    scanf("%50[^\n]", texto); 

    conta_caracter(texto, &vog, &cons);

    printf("Vogais: %d\n", vog);
    printf("Consoantes: %d\n", cons);

    return 0;
}