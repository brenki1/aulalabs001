#include <stdio.h>

int main(){

    int i, vet[10], j, k, primo;

    for(i = 0; i < 10; i++){
        printf("Insira um numero inteiro: ");
        setbuf(stdin, NULL);
        scanf("%d", &vet[i]);
    }
    for(j = 0; j < 10; j++){
        primo = 1;
        for(k = 2; k < j; k++){
            if((vet[j] % k) == 0){
                primo = 0;
            }
        }
        if(primo == 1){
            printf("%d eh primo e esta na posicao [%d]\n", vet[j], j);
        }
    }   


    return 0;
}