#include <stdlib.h>
#include <stdio.h>

int main(){

    float mk; //massa em kilos
    float ml; //massa em libras

    printf("Insira um valor de massa em libras: ");
    scanf("%f", &ml);

    mk = ml*0.45;
    printf("Essa massa, em quilogramas, equivale a %f", mk);

    return 0;
} 