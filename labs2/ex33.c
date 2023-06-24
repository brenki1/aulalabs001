#include <stdio.h>

int main(){

    float pa, pn;

    printf("Insira o preço antigo do produto, em reais: ");
    scanf("%f", &pa);

    if(pa <= 50){
        pn = pa + (pa*0.05);
        printf("O preco novo eh R$%f\n", pn);
        

    } else if((pa > 50) && (pa <= 100)){
        pn = pa + (pa*0.10);
        printf("O preco novo eh R$%f\n", pn);
        

    } else if(pa > 100){
        pn = pa + (pa*0.15);
        printf("O preco novo eh R$%f\n", pn);

    }

    if(pn <= 80){
        printf("Preco barato\n");
        return 0;

    } else if((pn >= 80)&&(pn <= 120)){
        printf("Preco normal\n");
        return 0;

    } else if((pn >= 120) && (pn <= 200)){
        printf("Preco caro\n");
        return 0;

    } else if((pn > 200)){
        printf("Preco muito caro\n");
    }

    return 0;
}