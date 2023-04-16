#include <stdio.h>

int main(){

    float slbase;
    float imposto;
    float sl; //salário a receber

    printf("Insira o salário-base de um funcionário, em reais: ");
    scanf("%f", &slbase);

    imposto = slbase*0.07;
    sl = slbase + (slbase*0.05) - imposto;
    printf("O salário que esse funcionário receberá é R$%f", sl);
    

    return 0;
}