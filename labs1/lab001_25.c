#include <stdlib.h>
#include <stdio.h>

int main(){

    float aream2; //área em metros quadrados
    float acres; 

    printf("Insira um valor em acres: ");
    scanf("%f", &acres);
    aream2 = acres*4048.58;
    printf("Esse valor em metros quadrados equivale a %f", aream2);

    return 0;
}