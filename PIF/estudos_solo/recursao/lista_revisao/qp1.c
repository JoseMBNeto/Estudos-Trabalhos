#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaDigitos (int n){
    if(n == 0) return 0;
    else{
       return n % 10 + somaDigitos(n / 10);
    }
}

int main() {

    int n;

    printf("Digite o valor desejado: \n");
    scanf("%d", &n);

    int r = somaDigitos(n);
    printf("%d", r);
    
    return 0;
}