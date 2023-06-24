#include <stdio.h>

int main(){

    float altura, pi; //pi = peso ideal
    char sexo;

    printf("Insira sua altura: ");
    scanf("%f", &altura);
    fflush(stdin);
    printf("Insira seu sexo (H ou M): ");
    scanf("%s", &sexo);

    if(sexo == 'M'){
        pi = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh %f", pi);
        
    }
    else if(sexo == 'H'){
        pi = (72.7*altura) - 58;
        printf("Seu peso ideal eh %f", pi);
        
    }

return 0;
}