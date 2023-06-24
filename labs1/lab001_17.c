#include <stdio.h>
#include <stdlib.h>

int main(){

    float polegadas;
    float cent; 

    printf("Insira um comprimento em centímetros: ");
    scanf("%f", &cent);

    polegadas = cent/2.54;
    printf("Esse valor em polegadas equivale a %f", polegadas);

    return 0;
}