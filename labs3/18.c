#include <stdio.h>

int main(){

    int ano;
    double salario, aumento;

    salario = 2000;
    aumento = 0.015;

    for(ano = 1997; ano <= 2023; ano++){
        aumento *= 2;
        salario = salario + (salario*aumento);
    }
    printf("O salario atual eh de R$%f", salario);

    return 0;
}