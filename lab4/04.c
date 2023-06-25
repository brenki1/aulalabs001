#include <stdio.h>
#include <math.h>

int verificaquadrado(int i);

int main(){

    int i, verifica;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &i);

    verifica = verificaquadrado(i);

    if(verifica == 1){
        printf("eh um quadrado perfeito!\n");

    } else if(verifica == 0){
        printf("Nao eh um numero valido\n");
    } else if(verifica == 2){
        printf("Nao eh um quadrado perfeito!\n");
    }

    return 0;
}

int verificaquadrado(int i){

    if((sqrt(i)*(sqrt(i))) == i){
        return 1;
    } else if(i <= 0){
        return 0;
    } else return 2;
}