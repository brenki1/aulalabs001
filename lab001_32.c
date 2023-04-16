#include <stdlib.h>
#include <stdio.h>

int main(){

    int i;
    int soma = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &i);

    soma = ((i*3) + 1) + ((i*2)- 1);
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro é %d", soma);

    return 0;
}