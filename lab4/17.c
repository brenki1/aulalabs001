#include <stdio.h>

int soma(int x, int y);

int main(){

    int a, b, soma_num;


    printf("Insira dois numeros inteiros: ");
    scanf("%d%d", &a, &b);

    soma_num = soma(a, b);

    printf("A soma de todos os numeros entre %d e %d eh %d\n", a, b, soma_num);

    return 0;
}

int soma(int x, int y){

    int i, soma = 0;

    for(i = x; i < y; i++){
        soma += i;
    }

    return soma;

}