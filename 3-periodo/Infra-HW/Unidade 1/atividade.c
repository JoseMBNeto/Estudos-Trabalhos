#include <stdio.h>

int main(void)
{
    float  soma_float  = 0.0f;
    double soma_double = 0.0;

    for (int i = 0; i < 1000000; i++) {
        soma_float  += 0.1f;
        soma_double += 0.1;
    }

    printf("float : %.17f\n", soma_float);
    printf("double: %.17f\n", soma_double);

    return 0;
}