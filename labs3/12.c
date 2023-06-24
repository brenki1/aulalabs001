#include <stdio.h>

int main(){

    int i, num, soma;
    soma = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    for(i = 1; i <= num/2; i++){
        if(num % i == 0){
           printf("%d ", i);
           soma = soma + i;
        }
    }
    printf("\n");
    printf("A soma eh %d\n", soma);

    return 0;
}