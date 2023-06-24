#include <stdlib.h>
#include <stdio.h>

int main(){

    float salario;
    float aumento;

    printf("Insira um valor de salario qualquer: ");
    scanf("%f", &salario);

    aumento = salario + (salario*0.25);
    printf("Esse salário, ao receber um aumento de 25porcento, será %f", aumento);

    return 0;
} 