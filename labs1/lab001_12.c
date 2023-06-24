#include <stdlib.h>
#include <stdio.h>

int main(){

    float dm; //distância em milhas
    float dk; //distância em kilomêtros

    printf("Insira uma distância em milhas: ");
    scanf("%f", &dm);

    dk = 1.61 * dm;
    printf("essa distância em quilômetros é %f", dk);

    
    return 0;
}