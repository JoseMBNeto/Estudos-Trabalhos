/*
Defina as structs abaixo:
typedef struct {
float x;
float y;

} Ponto;
typedef struct {
Ponto p1;
Ponto p2;
} Retangulo;
Implemente as funções:
float area_retangulo(Retangulo r);
int contar_retangulos_maiores(Retangulo v[], int n, float valor);
A função area_retangulo deve:
● receber uma struct do tipo Retangulo;
● retornar a área do retângulo.
Considere que:
● a base é dada pelo valor absoluto da diferença entre as coordenadas x;
● a altura é dada pelo valor absoluto da diferença entre as coordenadas y.
A função contar_retangulos_maiores deve:
● receber um vetor de Retangulo, um inteiro n e um valor real;
● retornar a quantidade de retângulos cuja área é maior que o valor informado.
Implemente uma função main() que:
1. leia um inteiro n;
2. declare um vetor de Retangulo com n posições;
3. leia os dados de cada retângulo;
4. leia um valor real;
5. chame a função contar_retangulos_maiores;
6. imprima a quantidade retornada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    float x;
    float y;
}Ponto;

typedef struct {
    Ponto p1;
    Ponto p2;
}Ret;

float area_retangulo(Ret r){
    float base = fabsf(r.p2.x - r.p1.x);
    float altura = fabsf(r.p2.y - r.p1.y);
    return base * altura;
}

int contar_retangulos_maiores(Ret vet[], int n, float valor){
    int cont = 0;

    for(int i=0; i<n; i++){
        float area = area_retangulo(vet[i]); 
        if(area > valor){
            cont++;
        }
    }

    return cont;
}

int main() {
    int n;
    printf("Digite a quantidade de retangulos: ");
    scanf("%d", &n);

    Ret vet[n];

    for (int i=0;i<n;i++){
        printf(" Digite o x1 e y1 do primeiro retangulo: ");
        scanf("%f %f", &vet[i].p1.x, &vet[i].p1.y);
        
        printf(" Digite o x2 e y2 do segundo retangulo: ");
        scanf("%f %f", &vet[i].p2.x, &vet[i].p2.y);
    }

    float valor;
    printf("Digite o valor de referencia: ");
    scanf("%f", &valor);

    int quantidade = contar_retangulos_maiores(vet, n, valor);
    printf("Retangulos com area maior que %.2f: %d\n", valor, quantidade);

    
    return 0;
}