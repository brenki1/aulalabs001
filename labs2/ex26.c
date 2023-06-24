#include <stdio.h>

int main(){

    float distancia, consumo, kml;

    printf("Insira uma distancia em KM: ");
    scanf("%f", &distancia);
    printf("Insira o consumo de combustivel nesse percurso, em litros: ");
    scanf("%f", &consumo);

    kml = distancia/consumo;

    if(kml < 8){
       printf("Venda esse carro!\n");
       return 0;
    } else if((kml > 8) && (kml < 14)){
       printf("Economico!\n");
       return 0;
    } else if(kml > 14){
       printf("Super economico!\n");
    }  

    return 0;
}