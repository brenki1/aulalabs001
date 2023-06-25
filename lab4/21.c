#include <stdio.h>

void imprimeExc(int n);

int main(){

    int l;

    printf("Insira o numero de linhas que deseja escrever: ");
    scanf("%d", &l);

    imprimeExc(l);

    return 0;
}

void imprimeExc(int n){

    int i, j;

    for(i = 0; i <= n; i++){
        for(j = 0; j < i; j++){
            printf("!");
        }
        printf("\n");
    }
}