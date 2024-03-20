#include <stdio.h>

void atualizaP(int *pontosA, int *pontosB, int *golsA, int *golsB);

int main(){

    int pontosA, pontosB, golsA, golsB;

    printf("Insira os pontos do Time A antes do jogo: ");
    scanf("%d", &pontosA);

    printf("Insira os pontos do Time B antes do jogo: ");
    scanf("%d", &pontosB);

    printf("Insira a quantidade de gols que o Time A fez durante a partida: ");
    scanf("%d", &golsA);

    printf("Insira a quantidade de gols que o Time B fez durante a partida: ");
    scanf("%d", &golsB);

    atualizaP(&pontosA, &pontosB, &golsA, &golsB);
    
    printf("Apos a partida, o Time A ficou com %d pontos, e o Time B com %d\n", pontosA, pontosB);
    
    return 0;

}

void atualizaP(int *pontosA, int *pontosB, int *golsA, int *golsB){

    if(*golsA > *golsB){
        *pontosA += 3;
    } else if(*golsA < *golsB){
        *pontosB += 3;
    } else if(*golsA == *golsB){
        *pontosA += 1;
        *pontosB += 1;
    }

}