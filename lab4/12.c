#include <stdio.h>

int somalg(int x, int soma);

int main(){
    
    int x, soma = 0;

    printf("Insira um numero inteiro maior do que zero: ");
    scanf("%d", &x);

    if(x < 0){
        printf("Numero invalido!\n");
        return 0;
    }

    soma = somalg(x, soma);

    printf("A soma dos algarimos desse numero eh %d\n", soma);
  
    return 0;
}

int somalg(int x, int soma){
    soma = 0;
    while(x > 0){
        soma = soma + x%10;
        x = x/10;
    }
    return soma;

}