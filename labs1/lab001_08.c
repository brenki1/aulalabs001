#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float C; //graus Celsius
    float K; //graus Kelvin

    printf("insira uma temperatura em Kelvin: ");
    scanf("%f", &K);

    C = K - 273.15;
    printf("essa temperatura em Celsius é %f", C);

    return 0;
}