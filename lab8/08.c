#include <stdio.h>

int main(){

    int vet[6], *vetp, i, j;

    vetp = &vet[0];

    for(i = 0; i < 6; i++){
        printf("Insira um numero para a posicao [%d]: ", i+1);
        setbuf(stdin, NULL);
        scanf("%d", &vet[i]);
    }

    for(j = 0; j < 6; j++){
        vetp = &vet[j];
        printf("O valor na posicao [%d] eh %d\n", j+1, *vetp);
        printf("O endereco de memoria eh %p\n", vetp);
    }
}