#include <stdio.h>

int ehPalindromo (char *str){

    char *pntnormal = str;
    char *pntinverso = str;

    while (*pntinverso != '\0'){
        pntinverso++;
    }
    pntinverso--;

    while (pntnormal < pntinverso){
        if (*pntnormal != *pntinverso){
            return 0;
        }
        pntnormal++;
        pntinverso--;
    }
    return 1;

}

int main(){

    char str[] = "ovo";

    printf("String normal: %s", str);
    int resp = ehPalindromo(str);
    printf("String alterada: %d", resp);


    return 0;
}