#include <stdlib.h>
#include <stdio.h>

int main(){

    float pagbruto;
    float pagliq;
    int dias;
    float imposto;

    printf("Insira a quantia de dias que o encanador trabalhou: ");
    scanf("%d", &dias);

    pagbruto = 30.00*dias;
    imposto = pagbruto*0.08;
    pagliq = pagbruto - imposto;
    printf("O encanador receberá R$%f", pagliq); 

    return 0;
}