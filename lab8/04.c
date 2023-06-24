#include <stdio.h>

int main(){

    int i, i2, *ii, *ii2;

    printf("Insira dois numeros inteiros: ");
    setbuf(stdin, NULL);
    scanf("%d%d", &i, &i2);

    ii = &i;
    ii2 = &i2;

    if(ii > ii2){
        printf("%d eh o maior\n", *ii);
    } else if(ii2 > ii){
        printf("%d eh o maior\n", *ii2);
    }
return 0;
}