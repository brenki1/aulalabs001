#include <stdio.h>

void kilometragem(float dist, float gas);

int main(){

    float distancia, consumo;

    printf("Insira uma distancia em KM: ");
    scanf("%f", &distancia);
    printf("Insira o consumo de combustivel nesse percurso, em litros: ");
    scanf("%f", &consumo);

    kilometragem(distancia, consumo);

    return 0;
}

void kilometragem(float dist, float gas){

float kml;

kml = dist/gas;

if(kml < 8){
       printf("Venda esse carro!\n");
    } else if((kml > 8) && (kml < 14)){
       printf("Economico!\n");
    } else if(kml > 14){
       printf("Super economico!\n");
    }
}