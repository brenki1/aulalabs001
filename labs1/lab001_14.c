#include <stdlib.h>
#include <stdio.h>

int main (){
    
    float graus;
    float radiano;

    printf("Insira um ângulo em graus: ");
    scanf("%f", &graus);

    radiano = graus * 3.141592 / 180;
    printf("Esse ângulo, em radiano equivale a %f", radiano);
    

    return 0;
}