#include <stdio.h>

int data(int dia, int mes, int ano);

int main(){

    int DIA, MES, ANO, DATA;
    printf("Insira um dia: ");
    scanf("%d", &DIA);
    printf("Insira um mes: ");
    scanf("%d", &MES);
    printf("Insira um ano: ");
    scanf("%d", &ANO);
    
    DATA = data(MES, ANO, DATA);
    printf("%d", DATA);

}

int data(int dia, int mes, int ano){
    
}