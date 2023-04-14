#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int i;
    int quadrado = 0;

    printf("insira um número inteiro: ");
    scanf("%d", &i);

    quadrado = i * i;

    printf("o quadrado desse número é %d", quadrado);

    return 0;
}