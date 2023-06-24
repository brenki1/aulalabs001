#include <stdio.h>

int main(){

    float c, l, preco, custo;

    printf("Insira o comprimento e largura de um terreno em metros: ");
    scanf("%f%f", &c, &l);
    fflush(stdin);
    printf("Insira o preço do metro de tela, em reais: ");
    scanf("%f", &preco);

    custo = ((c*preco) + (l*preco));

    printf("O custo para cercar esse terreno sera de R$%f\n", custo);

    return 0;
}