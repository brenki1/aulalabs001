#include <stdio.h>

int dobro(int x);

int main(){
    
    int a;

    printf("digite dois valores inteiros: ");
    scanf("%d", &a);

    int z = dobro(a);

    printf("o dobro eh %d\n", z);
}

int dobro(int x){
    return x*2;
}
