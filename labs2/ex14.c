#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Insira tres notas podem valer de 0 ate 10: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    media = ((n1*2)+(n2*3)+(n3*5))/10;

    if((n1 < 0) || (n2 < 0) || (n3 < 0) && (n1 > 10) || (n2 >10) || (n3 > 10)){
        printf("Nota invalida!\n");
    }
    else if(media > 0 && media <= 2.9)
        printf("O aluno esta reprovado!\n");

    else if(media >= 3 && media <= 4.9)
        printf("O aluno esta de recuperacao!\n");
    
    else if(media > 4.9)
        printf("O aluno foi aprovado!\n");

    return 0;
}