#include <stdio.h>
#include <stdlib.h>

int main(){

    float m3;
    float litros;

    printf("Insira um volume em litros: ");
    scanf("%f", &litros);

    m3 = litros/1000;
    printf("Esse volume, em metros cúbicos, equivale a %f", m3);

    return 0; 
}