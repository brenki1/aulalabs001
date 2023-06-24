#include <stdio.h>

int main(){

    int x, y;

    printf("Insira dois numeros inteiros: ");
    scanf("%d%d", &x, &y);
    
    if(x > y)
      printf("%d eh o maior \n", x);
    else if(y > x){
        printf("%d eh o maior \n", y);
    }
    if(x == y)
      printf("os numeros sao iguais\n");
    

    return 0;
}