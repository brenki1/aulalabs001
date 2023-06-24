#include <stdio.h>

int main (){

    printf("\nusando for\n");

    int i;
    for(i = 0; i < 101; i++){
        if( i == 0){
            continue;
        }
        printf("%d ", i);

    }
    printf("\nusando while\n");
    printf("\n");

    int numero = 1;
    while(numero <= 100){
        printf("%d ", numero);
        numero++;
    }
    printf("\nusando dowhile\n");
    printf("\n");

    int num = 1;
    do{ 
        printf("%d " , num);
        num++;
    }while(num <= 100);



return 0;


}