#include <stdio.h>

int main(){

    int i, soma;
    soma = 0;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &i);

    while(i > 0){
        soma = soma + i % 10;
        i = i/10;
    }
    printf("A soma dos algarismos desse numero eh %d\n", soma);


    return 0;
}