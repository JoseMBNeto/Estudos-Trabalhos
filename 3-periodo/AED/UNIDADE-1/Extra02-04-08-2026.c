#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a = 10, b = 20;
    int *ptrA = &a, *ptrB = &b;
    int *temp;
    temp = ptrA; 
    ptrA = ptrB; 
    ptrB = temp; 
    *ptrA += 5; 
    printf("%d %d\n", a, b);
    return 0;
}