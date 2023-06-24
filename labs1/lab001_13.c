#include <stdlib.h>
#include <stdio.h>

int main(){

    float dm; //distância em milhas
    float dk; //distância em kilomêtros

    printf("Insira uma distância em quilômetros: ");
    scanf("%f", &dk);

    dm = dk / 1.61;
    printf("essa distância em milhas é %f", dm);

    
    return 0;
}