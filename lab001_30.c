#include <stdlib.h>
#include <stdio.h>

int main(){

    float cotdolar;
    float real;
    float dolar;

    printf("Insira um valor em reais (R$): ");
    scanf("%f", &real);
    printf("Insira o valor da cotação do dólar: ");
    scanf("%f", &cotdolar);

    dolar = real/cotdolar;
    printf("Esse valor, em dólares ($), equivale a %f", dolar);

    return 0;
}