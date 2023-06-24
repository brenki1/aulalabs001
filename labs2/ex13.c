#include <stdio.h>

int main(){

    float media, n1, n2, n3;

    printf("Insira 3 notas de um aluno: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    media = ((n1*1) + (n2*1) + (n3*2))/4;

    if(media >= 60)
      printf("O aluno foi aprovado!\n");
    else printf("O aluno reprovou!\n");

    return 0;
}