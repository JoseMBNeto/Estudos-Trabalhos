#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int i=0, k=0;

    
    char str1[100];
    scanf("%99[^\n]", str1);
    
    char str2[100];
    scanf(" %99[^\n]", str2);

    //char *vet = (char*)malloc(50 * sizeof(char));

    int tam = strlen(str1) + strlen(str2) + 1;
    char *vet = (char*) malloc(tam * sizeof(char));

    while (str1[i] != '\0'){
        vet[k]= str1[i];
        k++;
        i++;
    }

    i=0;

    while (str2[i] != '\0'){
        vet[k] = str2[i];
        k++;
        i++;
    }
    vet[k] = '\0';

    printf("%s", vet);

    free(vet);

    return 0;
}