#include <stdio.h>
#include <stdlib.h>

int main(){

    float polegadas;
    float cent; 

    printf("Insira um comprimento em polegadas: ");
    scanf("%f", &polegadas);

    cent = polegadas*2.54;
    printf("Esse valor em centímetros equivale a %f", cent);

    return 0;
}