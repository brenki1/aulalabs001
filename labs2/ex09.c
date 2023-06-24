#include <stdio.h>

int main(){

    float salario, prestacao;

    printf("Insira o valor do salario: ");
    scanf("%f", &salario);
    printf("Insira o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);

    if(prestacao > salario*0.20)
       printf("Emprestimo nao concedido!\n");
    else
       printf("Emprestimo concedido!\n");

    return 0;
}