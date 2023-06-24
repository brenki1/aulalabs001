#include <stdio.h>

int main(){

    int x, y, diferenca;

    printf("Insira dois numeros inteiros: ");
    scanf("%d%d", &x, &y);
    diferenca = x - y;
    if(x > y)
      printf("%d eh o maior \n", x);
    else if(y > x){
        printf("%d eh o maior \n", y);
    }
    printf("a diferenca entre esses dois numeros eh %d\n", diferenca);

    return 0;
}