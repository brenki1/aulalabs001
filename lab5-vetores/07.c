#include <stdio.h>

int main(){
 
    int i, j, k, l, m, vet[6];

    for(i = 0; i < 6; i++){
        printf("Insira um numero inteiro: ");
        setbuf(stdin, NULL);
        scanf("%d", &vet[i]);
    }

    for(j = 0; j < 6; j++){
        if((vet[j] % 2) == 0){
            printf("%d ", vet[j]);
        }
    }   printf("sao pares.\n");
    
    for(k = 0; k < 6; k++){
        if((vet[k] % 2) == 0){
            vet[k] += vet[k];
            printf("A soma dos pares eh %d\n", vet[k]);
        }
    }

    for(l = 0, m = 0; l < 6; l++){
        if((vet[l]%2) != 0){
            printf("%d ", vet[l]);
            m++;
        }
    } printf("sao impares!\n"); printf("Foram digitados %d numeros impares!\n", m);

    return 0;
}