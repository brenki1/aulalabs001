#include <stdio.h>

int main(){

    float n1, n2, n3;

    printf("Insira tres numeros diferentes: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    if((n1 > n2) && (n1 > n3) && (n2 > n3)){
        printf("Em ordem crescente: %f %f %f\n", n3, n2, n1);
        return 0;
        
    } else if((n1 > n2) && (n1 > n3) && (n3 > n2)){
        printf("Em orden crescente: %f %f %f\n", n2, n3, n1);
        return 0;

    } else if((n2 > n1) && (n2 > n3) && (n1 > n3)){
        printf("Em ordem crescente: %f %f %f\n", n3, n1, n2);
        return 0;

    } else if((n2 > n1) && (n2 > n3) && (n3 > n1)){
        printf("Em ordem crescente: %f %f %f\n", n1, n3, n2);
        return 0;

    } else if((n3 > n1) && (n3 > n2) && (n1 > n2)){
        printf("Em ordem crescente: %f %f %f\n", n2, n1, n3);
        return 0;

    } else if((n3 > n1) && (n3 > n2) && (n2 > n1)){
        printf("Em ordem crescente: %f %f %f\n", n1, n2, n3);
    }

    return 0;
}