#include <stdio.h>
#include <stdlib.h>

int main (){

    int i;
    for(i = 0; i < 101; i++){
        if( i == 0){
            continue;
        }
        printf("%d \n", i);

    }
    int numero = 1;
    while(numero <= 100){
        printf("%d \n", numero);
        numero++;
    }

    int num = 1;
    do{ 
        printf("%d \n" , num);
        num++;
    }while(num <= 100);



return 0;


}