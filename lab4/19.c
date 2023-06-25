#include <stdio.h>

typedef int ClauClau;

int fatorial(int x);

ClauClau main(){

    int a, fat;

    printf("Insira um numero para ser calculado seu respectivo fatorial: ");
    scanf("%d", &a);

    fat = fatorial(a);

    printf("O fatorial de %d eh %d\n", a, fat);

    return 0;
    
}

int fatorial(int x){

    int i;

    for(i = 1; x > 1; x--){
        i *= x;
    }

    return i;
}