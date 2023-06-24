#include <stdio.h> 

int main(){

    int i;

    printf("Insira um numero inteiro: ");
    scanf("%d", &i);

    if((i % 3 == 0) && (i % 5 == 0))
       printf("Eh divisivel por 3 e por 5!\n");
    else if(i % 3 == 0)
       printf("Eh divisivel por 3!\n");
    else if(i % 5 == 0)
       printf("Eh divisivel por 5!\n");

    return 0;
}