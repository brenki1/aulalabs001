#include <stdio.h>

int volumees(int r);

int main(){

    int i, volume;

    printf("Insira um raio de uma esfera: ");
    scanf("%d", &i);
    printf("Considerando pi = 3!\n");

    volume = volumees(i);

    if(volume == 0){
        printf("Raio invalido!\n");
    } else printf("O volume eh igual a %f", volume);

    return 0;
}

int volumees(int r){
    if(r > 0){
        return ((4*3*r)*(4*3*r)*(4*3*r))/3;
    } else if(r <= 0){
        return 0;
    }
}