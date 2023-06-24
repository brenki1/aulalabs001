#include <stdio.h>

int main(){
    int horas, duracao;
    long double minutos, segundos, final; 

    printf("Insira o horario de inicio em horas, minutos e segundos: ");
    scanf("%d%Lf%Lf", &horas, &minutos, &segundos);

    printf("Insira a duracao do experimento em segundos: ");
    scanf("%d", &duracao);

    minutos = minutos*60;
    horas = horas*3600;
    segundos = segundos + duracao;
    final = minutos + segundos + horas;
    horas = (final/3600);
    minutos = (horas*60);
    segundos = minutos*60;

    
    printf("%d Horas, %Lf Minutos e %Lf Segundos", horas, minutos, segundos);
    


    return 0; 
}