#include <stdio.h>

int main(){

    int i, i2, *ii, *ii2;

    printf("Insira dois numeros inteiros: ");
    setbuf(stdin, NULL);
    scanf("%d%d", &i, &i2);

    ii = &i;
    ii2 = &i2;

    printf("Os dois numeros sao %d e %d\n", *ii, *ii2);
    printf("A soma eh %d\n", *ii+*ii2);
    printf("A subtracao eh %d\n", *ii-*ii2);
    printf("O produto eh %d\n", *ii**ii2);
    printf("O quociente eh %d\n", *ii/ *ii2);
return 0;
}