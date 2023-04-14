#include <stdlib.h>
#include <stdio.h>

int main(){

    float x, y, z;
    float soma = 0;
    printf("Insira três números, separados por vírgula e espaço (1, 2, 3): ");
    scanf("%f, %f, %f", &x, &y, &z);
    soma = (x*x) + (y*y) + (z*z);
    printf("a soma do quadrado desses números é %f", soma);

    return 0;
}