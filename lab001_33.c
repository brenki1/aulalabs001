#include <stdio.h>
#include <stdlib.h>

int main(){

    float lado; 
    float area;

    printf("Insira o valor do lado de um quadrado: ");
    scanf("%f", &lado);
    area = lado*lado;
    printf("%f", area);

    return 0;
}