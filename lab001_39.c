#include <stdlib.h>
#include <stdio.h>

int main (){

    float importancia = 780000;
    float prim;
    float seg;
    float terc;

    prim = importancia*0.46;
    seg = importancia*0.32;
    terc = importancia - (seg + prim);

    printf("O primeiro ganhador receberá: R$%f. O segundo ganhador receberá: R$%f. O terceiro ganhador receberá: R$%f ", prim, seg, terc);

    return 0;
}