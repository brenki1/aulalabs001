#include <stdlib.h>
#include <stdio.h>

int main(){

    int i;
    int x;
    int y;

    printf("Insira um valor inteiro: ");
    scanf("%d", &i);
    y = i--;
    x = y + 1;
    printf("%d %d %d", i, y, x);

    return 0;
}