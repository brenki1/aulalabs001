#include <stdlib.h>
#include <stdio.h>

int main(){

    float kmh; //velocidade em km/h
    float ms; //velocidade em m/s

    printf("Insira uma velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;
    printf("Essa velocidade, em m/s é %f", ms);

    return 0;

}