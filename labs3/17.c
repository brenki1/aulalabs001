#include <stdio.h>

int main(){
    
    float ze = 1.1, chico = 1.5;
    int i;

    for(i = 1; i > 0; i++){
        ze = ze + 0.03;
        chico = chico + 0.02;

        if(ze > chico){
            break;
        }
    }
    printf("Ze sera maior que chico em %d anos\n", i);


    return 0;
}