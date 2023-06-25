#include <stdio.h>

void desenha_linha(int linhas);

int main(){

    int l;

    printf("Quantas linhas voce deseja escrever? ");
    scanf("%d", &l);

    desenha_linha(l);

    return 0;
}

void desenha_linha(int linhas){

    int i;

    for(i = 0; i <= linhas; i++){
        printf("=");
    }
    printf("\n");
}