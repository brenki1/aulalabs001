#include <stdio.h>

int main(){

    int i, v[10];

    for(i = 0; i < 10; i++){
        printf("Insira um numero inteiro para a pos [%d]: ", i+1);
        scanf("%d", (v+i));
    }

    for(i = 0; i < 10; i++){
        printf("Pos [%d] = %d ", i+1, *(v+i));
    }



    return 0;
}