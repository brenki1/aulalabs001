#include <stdio.h>

float volumecil(float h, float r);

int main(){
    float volume, h, r;

    printf("Insira a altura e o raio de um cilindro, respectivamente: ");
    scanf("%f%f", &h, &r);

    volume = volumecil(h, r);
    printf("O volume desse cilindro eh %f\n", volume);

    return 0;
}

float volumecil(float h, float r){

    return 3.141592 * (r*r) * h;
}