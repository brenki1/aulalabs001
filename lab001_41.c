#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float valorHT; //valor da hora de trabalho
    float HT; //horas trabalhadas
    float salario;

    printf("Insira o valor da hora de trabalho (em reais): ");
    scanf("%f", &valorHT);
    printf("Insira a quantia de horas trabalhadas: ");
    scanf("%f", &HT);
    salario = HT*valorHT;
    salario = salario + salario*0.10;
    printf("O valor a ser pago ao funcionário é R$%f", salario);


    return 0;
}