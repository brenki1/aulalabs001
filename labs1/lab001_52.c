#include <stdio.h>

int main(){

    float premio, a1, a2, a3;

    printf("Insira o valor do premio e quanto cada um apostou, em R$: ");
    scanf("%f%f%f%f", &premio, &a1, &a2, &a3);

    a1 = (a1*premio)/(a1+a2+a3);
    a2 = (a2*premio)/(a1+a2+a3);
    a3 = (a3*premio)/(a1+a2+a3);

    printf("O primeiro apostador receberá R$%f\nO segundo apostador receberá R$%f\nO terceiro apostador receberá R$%f\n", a1, a2, a3);

   
    return 0;
}