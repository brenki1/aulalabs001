#include <stdio.h>

int potencia(int num, int pot);

int main(){

    int x, z, resultado;

    printf("Insira um numero e a potencia (separados por espaco): ");
    scanf("%d%d", &x, &z);

    resultado = potencia(x, z);

    printf("O resultado dessa potencia eh %d\n", resultado);

    return 0;

}

int potencia(int num, int pot){
    
    int i, potenciacao = 1;

    for(i = 0; i < pot; i++){
        potenciacao *= num;
    }
    if(pot == 0){
        return 1;
    } else return potenciacao;

    
}