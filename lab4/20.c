#include <stdio.h>

int checaPrimo(int x);

int main(){

    int qtdPrimos = 0, a, z;

    printf("Insira um numero positivo: ");
    scanf("%d", &a);

    for(z = 1; z <= a; z++){
        if(checaPrimo(z) == 1){
           qtdPrimos++;
        }
    }

    printf("A quantidade de numeros primos abaixo de %d eh: %d \n", a, qtdPrimos);
    
    return 0;
}


int checaPrimo(int x){

    int i, cont = 0;

    for(i = 1; i <= x; i++){
        if(x % i == 0){
            cont++;
        }
    }

    if(cont == 2){
        return 1;
    } else 
        return 0;
}