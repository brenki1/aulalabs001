#include <stdio.h>

float claudimedias(float nota1, float nota2, float nota3, char tipo);

int main(){
     
    float media, n1, n2, n3;
    char tp;

    printf("Insira as tres notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    fflush(stdin);
    printf("Media Aritmetica ou ponderada - A ou P?: ");
    scanf("%c", &tp);

    media = claudimedias(n1, n2, n3, tp);
    if((tp == 'A') || (tp == 'a')){
        printf("A media eh %f\n", media);
    } else if((tp == 'P') || (tp == 'p')){
        printf("A media eh %f\n", media);
    }

    return 0;
}

float claudimedias(float nota1, float nota2, float nota3, char tipo){
    if((tipo == 'A') || (tipo == 'a')){
        return (nota1 + nota2 + nota3)/3;
    } else if((tipo == 'P') || (tipo == 'p')){
        return ((nota1 * 5) + (nota2 *3) + (nota3 * 2))/10;
    }
}