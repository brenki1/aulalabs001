#include <stdlib.h>
#include <stdio.h>

int main(){

    float raio;
    float area;

    printf("Insira o valor de um raio de um círculo qualquer: ");
    scanf("%f", &raio);
    area = 3.141592*(raio*raio);
    printf("A área desse círculo é %f", area);
    
    return 0;
}