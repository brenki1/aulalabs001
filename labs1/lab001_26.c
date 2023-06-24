#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float hectares;
    float area; //área em metros quadrados

    printf("Insira um valor de área em metros quadrados: ");
    scanf("%f", &area);
    hectares = area*0.0001;
    printf("Esse valor, em hectares equivale a %f", hectares);


    return 0;
}