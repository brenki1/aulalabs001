#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    float xa, xb, ya, yb, distancia;

    printf("Insira dois pontos Xa e Xb: ");
    scanf("%f%f", &xa, &xb);

    printf("Insira dois pontos Ya e Yb: ");
    scanf("%f%f", &ya, &yb);

    distancia = sqrt((xb - xa)*(xb - xa) + (yb - ya)*(yb - ya));

    printf("a distancia entre esses dois pontos é %f", distancia);
 

    return 0;
}     