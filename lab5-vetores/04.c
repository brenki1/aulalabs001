#include <stdio.h>

int main(){

    int i, maior, menor, vet[5];

    maior = 0;

    for(i = 0; i < 5; i++){
        printf("Insira um numero: ");
        setbuf(stdin, NULL);
        scanf("%d", &vet[i]);
        if(vet[i] > maior){
            maior = i;
        } else if(vet[i] == maior){
            maior = maior;
        }
        
        if(vet[i] < maior){
            menor = i;
        }
    }   

    printf("A menor posicao eh [%d], e a maior posicao eh [%d]\n", menor+1, maior+1);

    return 0;
}