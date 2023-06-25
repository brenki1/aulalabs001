#include <stdio.h>

int conversor(int horas, int minutos, int segundos);

int main(){

    int convertido, horas, minutos, segundos;

    printf("Insira as horas minutos e segundos, respectivamente: ");
    scanf("%d%d%d", &horas, &minutos, &segundos);

    convertido = conversor(horas, minutos, segundos);

    printf("Esses valores, convertidos em segundos equivalem a %d segundos\n", convertido);

}

int conversor(int horas, int minutos, int segundos){

    horas = horas*3600;
    minutos = minutos*60;
    segundos = segundos;
    return horas+minutos+segundos;
}