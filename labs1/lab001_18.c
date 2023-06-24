#include <stdio.h>
#include <stdlib.h>

int main(){

    float m3;
    float litros;

    printf("Insira um volume em metros cúbicos (m³): ");
    scanf("%f", &m3);

    litros = 1000*m3;
    printf("Esse volume, em litros, equivale a %f", litros);

    return 0; 
}