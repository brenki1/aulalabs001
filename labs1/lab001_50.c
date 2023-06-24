#include <stdio.h>

int main(){
    int nascimento;
    printf("Insira seu ano de nascimento: ");
    scanf("%d", &nascimento);
    nascimento = 2023 - nascimento;
    printf("Sua idade é %d anos", nascimento);

    return 0;
}