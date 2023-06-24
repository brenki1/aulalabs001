#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float C; //graus Celsius
    float K; //graus Kelvin

    printf("insira uma temperatura em Celsius: ");
    scanf("%f", &C);

    K = C + 273.15;
    printf("essa temperatura em Kelvin é %f", K);

    return 0;
}