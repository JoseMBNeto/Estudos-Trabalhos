#include <stdio.h>

int verificarmedia(int n, int v[n]);

int main(){

    int n, i;
    scanf("%d", &n);
    int v[n];

    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int resultado = verificarmedia(n, v);
    printf("%d", resultado);

}

int verificarmedia(int n, int v[n]){
    //[4, 7, 3, 10] -> 2

    int contador = 1;
    int maiores = 0;
    int soma_atual = 0;
    double media_atual = 0;

    for (int i = 0; i < n - 1; i++){
        soma_atual += v[i];
        media_atual = soma_atual / contador;

        if(v[i + 1] > media_atual){
            maiores++;
        }
        contador++;
    }
    return maiores;
}