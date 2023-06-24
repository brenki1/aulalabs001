#include <stdio.h>

int main(){

    int i, j, n, c = 0;
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++){
        for(j = 0; j <= i; j++){
            c++;
            printf("%d ", c);
        }



        printf("\n");
    }
}