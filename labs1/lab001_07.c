#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float C; //graus Celsius
    float F; //graus Fahrenheit

    printf("insira uma temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = 5.0 * (F - 32.0) / 9;
    printf("essa temperatura em Celsius é %f", C);

    return 0;
}