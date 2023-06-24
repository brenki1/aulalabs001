#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    int a, b, i, soma, acertos, resposta;
    soma = 0;
    acertos = 0;

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        a = (rand() %100) + 1;
        b = (rand() %100) + 1;

        soma = a+b; 
        resposta = soma;

        printf("Qual eh a soma de %d + %d?\n", a, b);
        scanf("%d", &resposta);
        
        if(resposta != soma){
            printf("Errado!, a resposta correta eh %d\n", soma);
        } else acertos++;


    }
    printf("Voce acertou %d vezes!\n", acertos);

    return 0;
}