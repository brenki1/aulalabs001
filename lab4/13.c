#include <stdio.h>

int operacoes(int x, int y, char op);

int main(){

    int x, y, resultado;
    char op;

    printf("Insira a operacao que deseja realizar +, /, *, - (soma, divisao, multiplicacao ou subtracao): ");
    scanf("%c", &op);

    printf("Insira dois numeros para realizar a operacao (separados por espaco): ");
    setbuf(stdin, NULL);
    scanf("%d%d", &x, &y);

    resultado = operacoes(x, y, op);

    printf("O resultado eh: %d \n", resultado);


    return 0;
}

int operacoes(int x, int y, char op){

    int operacao = 0;

    if(op == '+'){
        operacao = x + y;
        return operacao;

    } else if(op == '-'){
        operacao = x - y;
        return operacao;

    } else if(op == '/'){
        operacao = x/y;
        return operacao;

    } else if(op == '*'){
        operacao = x*y;
        return operacao;
    }

}