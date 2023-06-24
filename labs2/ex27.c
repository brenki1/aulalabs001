#include <stdio.h>

int main(){

    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if((idade >= 5) && (idade <= 7)){
       printf("Sua categoria eh Infantil A\n");
       return 0;

    } else if((idade >= 8) && (idade <= 10)){
       printf("Sua categoria eh Infantil B\n");
       return 0;

    } else if((idade >= 11) && (idade <= 13)){
       printf("Sua categoria eh Juvenil A\n");
       return 0;

    } else if((idade >= 14) && (idade <= 17)){
       printf("Sua categoria eh Juvenil B\n");
       return 0;

    } else if((idade >= 18)){
       printf("Sua categoria eh Senior\n");
    }

    return 0;
}