#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float tempcelsius;
    float tempfahrenheit;

    printf("insira uma temperatura em Celsius: ");
    scanf("%f", &tempcelsius);

    tempfahrenheit = tempcelsius * (9.0/5.0) + 32;
    printf("essa temperatura em Fahrenheit é %f", tempfahrenheit);

    return 0;
}