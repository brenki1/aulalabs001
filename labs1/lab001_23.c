#include <stdlib.h>
#include <stdio.h>

int main(){

    float jardas;
    float metros;

    printf("Insira um valor em metros: ");
    scanf("%f", &metros);

    jardas = metros/0.91;

    printf("Esse valor em jardas é %f", jardas);

    return 0;

}