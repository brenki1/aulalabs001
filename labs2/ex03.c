#include <stdio.h>
#include <math.h>

int main(){

    float i, raiz, quadrado;

    printf("Insira um número: ");
    scanf("%f", &i);

    raiz = sqrt(i);
    quadrado = i*i;

    if(i < 0)
        printf("O quadrado desse numero eh %f\n", quadrado);
    else if(i > 0)
        printf("A raiz quadrada desse numero eh %f\n", raiz);



    return 0;
}