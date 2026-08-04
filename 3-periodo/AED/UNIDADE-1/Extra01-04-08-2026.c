#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int x;
    int y;
} Ponto;

int main() {
    Ponto p1, *ptrP;
    p1.x = 3;
    p1.y = 5;
    ptrP = &p1;
    (*ptrP).x += 2;
    ptrP->y *= 2;
    int soma = ptrP->x + (*ptrP).y;
    printf("%d %d %d\n", p1.x, p1.y, soma);
    return 0;
}