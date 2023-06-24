#include <stdio.h>

int main(){

    int i, numero, numero2;
    i = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);
    if(numero < 0){
        printf("Nao eh aceito numeros negativos!\n");
        return 0;
    }

    do{
        printf("Insira um numero inteiro: ");
        scanf("%d", &numero2);
        if(numero2 < 0){
            printf("Nao eh aceito numeros negativos!\n");
            exit(1);
        }
        numero = numero + numero2;
        i++;
    } while(i < 9); 
    
    printf("A media desses numeros eh %d\n", numero/(i+1));

    return 0;
}