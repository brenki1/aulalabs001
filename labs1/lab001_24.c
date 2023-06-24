#include <stdlib.h>
#include <stdio.h>

int main(){

    float aream2; //área em metros quadrados
    float acres; 

    printf("Insira um valor em metros quadrados: ");
    scanf("%f", &aream2);
    acres = aream2*0.000247;
    printf("Esse valor em acres equivale a %f", acres);

    return 0;
}