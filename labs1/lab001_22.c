#include <stdlib.h>
#include <stdio.h>

int main(){

    float jardas;
    float metros;

    printf("Insira um valor em jardas: ");
    scanf("%f", &jardas);

    metros = 0.91*jardas;

    printf("Esse valor em metros é %f", metros);

    return 0;

}