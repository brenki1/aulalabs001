#include <stdio.h>
#include <math.h>

int main(){

    float delta, a, b, c, raiz1, raiz2;

    printf("Insira as constantes a, b e c de uma eq. do segundo grau: ");
    scanf("%f%f%f", &a, &b, &c);

    delta = (b*b) - 4*a*c;
    raiz1 = (-b - sqrt(delta))/(2*a);
    raiz2 = (-b + sqrt(delta))/(2*a);

    if(delta < 0){
       printf("Não existe raiz\n");
       return 0;
    }else if(delta == 0){
       printf("Ha apenas uma raiz, que eh %f\n", raiz1);
       return 0;
    }else if(delta > 0){
       printf("As raizes sao %f e %f\n", raiz1, raiz2);
    }
    
    return 0;
}