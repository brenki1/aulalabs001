#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
    scanf("%d", &num);
    switch(num){
        case 1: printf("Um  \n"); break;
        case 2: printf("Dois  \n"); break;
        case 3: printf("Três"); break;
        case 4: printf("Quatro"); break;
        case 5: printf("cinco"); break;
        case 6: printf("seis"); break;
        default: printf("não é um número válido");
        system("pause");

        return 0;

    }
}
    