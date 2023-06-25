#include <stdio.h>

void imprimeTriangulo(int n);

int main(){

    int n;

    printf("Insira o numero de fileiras: ");
    scanf("%d", &n);

    imprimeTriangulo(n);

    return 0;
}

void imprimeTriangulo(int n){

    int i, j;

    for(i = 0; i < n; i++){
        for(j = (n - i); j >= 1; j--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("*");
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

}