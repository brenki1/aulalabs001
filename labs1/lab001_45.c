#include <stdio.h>

int main(){

    char letra;
    printf("Insira uma letra maiuscula: ");
    scanf("%c", &letra);

    letra = letra + 32;
    printf("%c\n", letra);

    return 0;
}