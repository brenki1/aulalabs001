#include <stdio.h>
#include <stdlib.h>

int main(){

    float raio;
    float altura;
    float volume;

    printf("Insira um raio e uma altura de um cilindro qualquer: ");
    scanf("%f%f", &raio, &altura);
    volume = 3.141592*(raio*raio) * altura;
    printf("O volume desse cilindro é %f", volume);

    return 0;
} 