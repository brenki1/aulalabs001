#include <stdio.h>
#include <math.h>

float hipotenusa(float a, float b);

int main(){
    
    float hip, cata, catb;

    printf("Insira os valores dos catetos de um triangulo retangulo: ");
    scanf("%f%f", &cata, &catb);

    hip = hipotenusa(cata, catb);
    printf("A hipotenusa desse triangulo equivale a %f\n", hip);
  
    return 0;
}

float hipotenusa(float a, float b){
    return sqrt((a*a) + (b*b));
}