#include <stdio.h>

float conversorf(float c);

int main(){

    float tempc, conversor;

    printf("Insira uma temperatura em Celsius: ");
    scanf("%f", &tempc);

    conversor = conversorf(tempc);
    printf("Essa temperatura, de Celsius para Fahrenheit, equivale a %fF\n", conversor);
}

float conversorf(float c){
    return c*9/5 + 32;
}