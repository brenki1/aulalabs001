#include <stdio.h>

float vermaior(float x, float y);

int main(){
    float a, b, maior;

    printf("Insira dois numeros: ");
    scanf("%f%f", &a, &b);
    maior = vermaior(a, b);

    if(maior == 0){
        printf("Os numeros sao iguais!\n");
    } else if(maior == 1){
        printf("%f eh maior!\n", a);
    } else if(maior == 2){
        printf("%f eh maior!\n", b);
    }
}

float vermaior(float x, float y){
    if(x == y){
        return 0;
    } else if(x > y){
        return 1;
    } else if(x < y){
        return 2;
    }
}