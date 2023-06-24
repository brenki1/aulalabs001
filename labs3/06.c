#include <stdio.h>

int main(){

    int i, numero, numero2;
    i = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    do{
        printf("Insira outro numero inteiro: ");
        scanf("%d", &numero2);
        numero = numero + numero2;
        i++;
    } while(i < 9); 
    
    printf("A media desses numeros eh %d\n", numero/(i+1));

    return 0;
}