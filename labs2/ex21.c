#include <stdio.h>

int main(){

    int i;
    float x, y, soma, subtracao, divisao, multiplicacao;

    do{
        printf("Escolha uma operacao\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        scanf("%d", &i);

    if((i < 1) || (i > 4)){
       printf("Opcao invalida!\n");
       printf("\n");
       }
    }while((i < 1) || (i > 4));

    if(i == 1){
        printf("Digite dois valores numericos: ");
        scanf("%f%f", &x, &y);
        soma = x + y;
        printf("a soma entre esses dois valores eh %f\n", soma);
        return 0;
    }
  
    if(i == 2){
        printf("Digite dois valores numericos: ");
        scanf("%f%f", &x, &y);
        subtracao = x - y;
        printf("a subtracao desses dois valores eh %f\n", subtracao);
        return 0;
    }

    if(i == 3){
        printf("Digite dois valores numericos: ");
        scanf("%f%f", &x, &y);
        multiplicacao = x * y;
        printf("o produto desses dois valores eh %f\n", multiplicacao);
        return 0; 
    }

    if(i == 4){
        printf("Digite dois valores numericos: ");
        scanf("%f%f", &x, &y);
    }
    if(y <= 0)
        printf("O denominador nao pode ser 0!\n");
    else if(y > 0){ 
        divisao = x / y;
        printf("o quociente desses dois valores eh %f\n", divisao);
    }


    return 0;
}