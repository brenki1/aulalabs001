#include <stdio.h>
#include <math.h>

int main(){

    float i, raiz;

    printf("Insira um número: ");
    scanf("%f", &i);

    raiz = sqrt(i);

    if(i < 0)
        printf("numero invalido!\n");
    else if(i > 0)
        printf("A raiz quadrada desse numero eh %f", raiz);

 

    return 0;
} 