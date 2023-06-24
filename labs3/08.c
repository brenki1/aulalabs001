#include <stdio.h>

int main(){

    int i, numMaior, numMenor, numero;

    printf("Insira o primeiro numero: ");
    scanf("%d", &numero);

    numMaior = numero;
    numMenor = numero;

    for(i = 1; i < 10; i++){
       printf("Insira o prox numero: ");
       scanf("%d", &numero);

       if(numero>numMaior){
        numMaior = numero;
       } else if(numero < numMenor){
        numMenor = numero;
       }
       
    }

    printf("O numero maior eh %d\n", numMaior);
    printf("O numero menor eh %d\n" , numMenor);



    return 0;
}