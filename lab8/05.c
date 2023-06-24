#include <stdio.h>

int main(){

    int i, i2, *ii, *ii2, soma = 0;

    printf("Insira dois numeros inteiros: ");
    setbuf(stdin, NULL);
    scanf("%d%d", &i, &i2);

    ii = &i;
    ii2 = &i2;

    i = i *2;
    i2 = i2 *2;

    soma = *ii + *ii2;

    printf("A soma do dobro desses numeros eh %d\n", soma);

return 0;

}