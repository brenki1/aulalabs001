#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){

    float a; //cateto a
    float b; //cateto b
    float hipotenusa;

    printf("Insira o valor de dois catetos: ");
    scanf("%f, %f", &a, &b);

    hipotenusa = sqrt((a*a) + (b*b));
    printf("A hipotenusa desse triângulo é %f", hipotenusa);

    return 0;
} 