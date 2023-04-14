#include <stdlib.h>
#include <stdio.h>

int main(){

    float kmh; //velocidade em km/h
    float ms; //velocidade em m/s

    printf("Insira uma velocidade em m/s: ");
    scanf("%f", &ms);

    kmh = ms * 3.6;
    printf("Essa velocidade, em km/h é %f", kmh);

    return 0;
}