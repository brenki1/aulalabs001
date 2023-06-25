#include <stdio.h>

int verifica(int i);

int main(){

    int i, verificacao;

    printf("Insira um numero: ");
    scanf("%d", &i);

    verificacao = verifica(i);

    if(verificacao == 0){
        printf("O numero eh igual a 0!\n");
    } else if(verificacao == 1){
        printf("O numero eh positivo!\n");
    } else if(verificacao == (-1)){
        printf("O numero eh negativo!\n");
    }


    return 0;
}

int verifica(int i){

    if(i == 0){
        return 0;
    }

    if(i > 0){
        return 1;
    }

    if( i < 0){
        return -1;
    }
}