#include <stdio.h>

void trianguloMT(int n);

int main(){

    int n;

    printf("Insira a largura do triangulo: ");
    scanf("%d", &n);

    trianguloMT(n);

    return 0;
}

void trianguloMT(int n){
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}