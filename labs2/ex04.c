#include <stdio.h>
#include <math.h>

int main(){

    float i, raiz, quadrado;

    printf("Insira um número: ");
    scanf("%f", &i);

    if(i < 0){
        printf("O numero deve ser positivo!\n");  
    }

    raiz = sqrt(i);
    quadrado = i*i;

 
    if(i > 0){
        printf("O quadrado desse numero eh %f\n", quadrado);
        printf("A raiz quadrada desse numero eh %f\n", raiz);
    }



    return 0;
}