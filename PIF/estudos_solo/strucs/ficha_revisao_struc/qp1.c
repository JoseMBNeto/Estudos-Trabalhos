/*
Defina uma struct chamada Ponto contendo:
● int x
● int y
Implemente uma função chamada somar_pontos. A função deve receber como parâmetros:
● duas structs do tipo Ponto
A função deve retornar:
● uma struct Ponto com a soma das coordenadas:
○ x = x1 + x2
○ y = y1 + y2
Protótipo da função:
Ponto somar_pontos(Ponto a, Ponto b);
Implemente uma função main() que:
1. leia dois pontos;
2. chame a função somar_pontos;
3. imprima o ponto resultante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ponto{
    int x;
    int y;
}P;

P somar_pontos (P a, P b){
    P resposta;

    resposta.x = a.x + b.x;
    resposta.y = a.y + b.y;
    return resposta;

}

int main() {

    P a,b;

    printf("Digite o valor de X1 e Y1: \n");
    scanf("%d %d", &a.x, &a.y);
    
    printf("Digite o valor de X2 e Y2: \n");
    scanf("%d %d", &b.x, &b.y);

    P r = somar_pontos(a,b);
    printf("Resposta: (%d %d)", r.x, r.y);
    
    
    return 0;
}