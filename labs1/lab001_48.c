#include <stdio.h>

int main(){

    int segundos;
    float minutos;
    long double horas;
    printf("Insira um valor inteiro em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos/60;
    horas = minutos/60;

    printf("esse valor em segundos eh %d, esse valor em minutos eh %f, esse valor em horas eh %Lf", segundos, minutos, horas);

    return 0;
}