#include <stdio.h>

int main(){

    int vet[6] = {1, 0, 5, -2, -5, 7}, i, soma = 0;

    soma = vet[0] + vet[1] + vet[5];
    vet[4] = 100;

    for(i = 0; i < 6; i++){
        printf("A posicao [%d] equivale a %d\n", i, vet[i]);
    }
    printf("A soma das posicoes [0], [1] e [5] eh %d\n", soma);

    return 0;
}