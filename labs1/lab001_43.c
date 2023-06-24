#include <stdio.h>

int main(){

    float valort;
    float desc10;
    float parc;
    float commv;//comissão a vista
    float commp;//comissão parcelada

    printf("Insira o valor total de um produto, em reais: ");
    scanf("%f", &valort);

    desc10 = valort - (valort*0.10);
    printf("O valor, ao ser aplicado um desconto de 10porcento será R$%f \n", desc10);
    parc = valort/3;
    printf("O valor de cada parcela, em 3x sem juros será R$%f  \n", parc);
    commv = desc10*0.05;
    printf("A comissão do vendedor no caso da venda ser a vista será R$%f \n", commv);
    commp = valort*0.05;
    printf("A comissão do vendedor no caso da venda ser parcelada será R$%f  \n", commp);


    return 0;
}