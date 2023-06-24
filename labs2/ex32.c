#include <stdio.h>

int main(){

    int cod;

    printf("Insira o codigo do produto: ");
    scanf("%d", &cod);

    if(cod == 100){
        printf("O valor a ser pago sera de R$1,20\n");
        return 0;

    } else if(cod == 101){
        printf("O valor a ser pago sera de R$1,30\n");
        return 0;
        
    } else if(cod == 102){
        printf("O valor a ser pago sera de R$1,50\n");
        return 0;
        
    } else if(cod == 103){
        printf("O valor a ser pago sera de R$1,20\n");
        return 0;
        
    } else if(cod == 104){
        printf("O valor a ser pago sera de R$1,70\n");
        return 0;
        
    } else if(cod == 105){
        printf("O valor a ser pago sera de R$2,20\n");
        return 0;
        
    } else if(cod == 106){
        printf("O valor a ser pago sera de R$1,00\n");
        return 0;
        
    }

    return 0;
}