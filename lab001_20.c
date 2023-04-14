#include <stdlib.h>
#include <stdio.h>

int main(){

    float mk; //massa em kilos
    float ml; //massa em libras

    printf("Insira um valor de massa em quilogramas: ");
    scanf("%f", &mk);

    ml = mk/0.45;
    printf("Essa massa, em libras, equivale a %f", ml);

    return 0;
} 