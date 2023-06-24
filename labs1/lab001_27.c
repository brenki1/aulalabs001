#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float hectares;
    float area; //área em metros quadrados

    printf("Insira um valor de área em hectares: ");
    scanf("%f", &hectares);
    area = hectares*10000;
    printf("Esse valor, em metros quadrados equivale a %f", area);


    return 0;
}