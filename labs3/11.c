#include <stdio.h>

int main(){

    int i, numero;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    for(i = 0; i <= numero; i++)
    printf("%d ", i);
   

    return 0;
}