#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    
    int claudiney1, claudiney2, i, lancamentos; //claudiney = dados

    printf("Insira o numero de lancamentos: ");
    scanf("%d", &lancamentos);

    srand(time(NULL));

    for(i = 1; i <= lancamentos; i++){
        claudiney1 = (rand() % 6);
        claudiney2 = (rand() % 6);
        printf("dado1: %d dado2: %d\n", ++claudiney1, ++claudiney2);
        if(claudiney1 > claudiney2){
            printf("Neste lancamento, o dado 1 foi maior que o dado 2\n");

        } else if(claudiney1 < claudiney2){
            printf("Neste lancamento, o dado 2 foi maior que o dado 1\n");

        } else if(claudiney1 == claudiney2){
            printf("Neste lancamento, o dado 1 foi igual ao dado 2\n");
        }
    }
   
    return 0;
}