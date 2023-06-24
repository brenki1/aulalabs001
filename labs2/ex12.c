#include <stdio.h>
#include <math.h>

int main(){

    int i;
    float logaritmo;

    printf("Insira um numero inteiro: ");
    scanf("%d", &i);

    if(i>0){
        logaritmo = log10(i);
        printf("o logaritmo desse numero eh %f", logaritmo);
    }
    else printf("Numero invalido!");

    return 0;
}