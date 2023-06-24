#include <stdlib.h>
#include <stdio.h>

int main(){

    float valor;
    float desconto; //valor com desconto

    printf("Insira um valor qualquer de um produto qualquer: ");
    scanf("%f", &valor);
    desconto = valor - (valor*0.12);
    printf("Esse valor, quando aplicado um desconto de 12porcento, equivale a %f", desconto);

    return 0;
}