#include <stdio.h>

int main(){

    int ano;
    ano = 0;

    printf("Insira um ano: ");
    scanf("%d", &ano);

    if((ano % 400 == 0) || (ano % 4 == 0) && !(ano % 100 == 0))
       printf("O ano eh bissexto!\n");
    else printf("O ano nao eh bissexto!\n");

    return 0;
}