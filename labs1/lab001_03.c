#include <stdlib.h>
#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    int soma = 0;

    printf("insira três números inteiros, (separe-os por vírgula!) : ");
    scanf("%d, %d, %d", &x, &y, &z);

    soma = x + y + z;
    printf("a soma dos números é: %d ", soma);

    return 0;
} 