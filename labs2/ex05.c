#include <stdio.h>

int main(){

    int i;

    printf("Insira um numero inteiro: ");
    scanf("%d", &i);

    if(i%2 == 0)
        printf("o numero eh par\n");
    else if(i%2 != 0)
        printf("o numero eh impar!\n");



    return 0;
}