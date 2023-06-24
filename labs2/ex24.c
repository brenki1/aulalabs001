#include <stdio.h>

int main(){
    
    float valor, valorfinal;
    char estado1, estado2;
    valor = 0;
    valorfinal = 0;

    printf("Insira um estado destino e o valor do produto em reais: ");
    scanf("%c%c%f", &estado1, &estado2, &valor);

    if((estado1 == 'M') && (estado2 == 'G')){
       valorfinal = valor + (valor*0.07);
       printf("O preço final do produto no estado de Minas Gerais eh R$%f\n", valorfinal);
       return 0;
    }else if((estado1 == 'S') && (estado2 == 'P')){
       valorfinal = valor + (valor*0.12);
       printf("O preço final do produto no estado de São Paulo eh R$%f\n", valorfinal);
       return 0;
    }else if((estado1 == 'R') && (estado2 == 'J')){
       valorfinal = valor + (valor*0.15);
       printf("O preço final do produto no estado do Rio de Janeiro eh R$%f\n", valorfinal);
       return 0;
    }else if((estado1 == 'M') && (estado2 == 'S')){
       valorfinal = valor + (valor*0.08);
       printf("O preço final do produto no estado do Mato Grosso do Sul eh R$%f\n", valorfinal);
       return 0;
    }else printf("Estado invalido!\n");
       
    return 0;
}