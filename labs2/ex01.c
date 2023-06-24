#include <stdio.h>

int main(){

    float i, j;

    printf("Insira dois numeros: ");
    scanf("%f%f", &i, &j);

    if(i > j)
       printf("%f eh maior que %f", i, j);
    else if (j > i)
        printf("%f eh maior que %f", j, i);

    return 0;
}