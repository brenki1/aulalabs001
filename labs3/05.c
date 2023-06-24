#include <stdio.h>

int main(){

    int i, numero, numero2;
    i = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    do{
        printf("Insira outro numero: ");
        scanf("%d", &numero2);
        numero = numero + numero2;
        i++;
    } while(i < 9); 
    
    printf("A soma desses numeros eh %d\n", numero);

    return 0;
}