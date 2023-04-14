#include <stdlib.h>
#include <stdio.h>

int main(){

    float x, y, z, i;
    float media; //média aritmética dos valores inseridos


    printf("Insira 4 notas e/ou valores, separados por vírgulas(x, y, z, ...): ");
    scanf("%f, %f, %f, %f", &x, &y, &z, &i);
    media = x+y+z+i/4;
    printf("A média aritmética desses valores é %f", media);

    return 0;
}