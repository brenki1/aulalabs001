#include <stdlib.h>
#include <stdio.h>

int main (){
    
    float graus;
    float radiano;

    printf("Insira um ângulo em radianos: ");
    scanf("%f", &radiano);

    graus = radiano * 180/3.141592;
    printf("Esse ângulo, em graus equivale a %f", graus);
    

    return 0;
}