#include <stdio.h>

int main(){

    float bmn, bm, h, area;

    printf("Insira os valores da dimensao de um trapezio (Base menor, base maior e altura): ");
    scanf("%f%f%f", &bmn, &bm, &h);

    area = ((bm + bmn)*h)/2;

    if(bm <= 0 && bmn <= 0)
       printf("valores invalidos!");
    else printf("A area do trapezio eh %f", area);

    return 0;
}