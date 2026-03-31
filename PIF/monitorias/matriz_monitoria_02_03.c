#include <stdio.h>


int procurar_elemento(int valor, int n, int matriz[n][n]);

int main(){

    int n;
    scanf("%d", &n);
    int matriz[n][n];

/*

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d", matriz[i][j]);
        }
    }
    
    int soma = 0;

    //matriz principal

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j){
                soma += matriz[i][j];
            }
        }
    }

    printf("%d", soma);


    //matriz inversa

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i+j==n-1){
                soma += matriz[i][j];
            }
        }
    }

    printf("%d", soma);

*/


}

int procurar_elemento(int valor, int n, int matriz[n][n]){
    int flag = 0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){ 
            if (valor == matriz[i][j]){
                flag =1;
            }
        }
    }

}


