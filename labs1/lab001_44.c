#include <stdio.h>

int main(){

    float alturadegrau;
    float altura;
    float degraus;

    printf("Insira a altura do degrau: ");
    scanf("%f", &alturadegrau);
    printf("Insira a altura que desejas alcançar: ");
    scanf("%f", &altura);

    degraus = altura/alturadegrau;
    printf("Você deverá subir %f degrau(s)", degraus);

    return 0;
}