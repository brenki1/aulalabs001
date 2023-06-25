#include <stdio.h>
#include <string.h>

int main(){
    
    int i, j, k, vet[10];

    for(i = 0; i < 10; i++){
        printf("Insira um numero: ");
        setbuf(stdin, NULL);
        scanf("%d", &vet[i]);
        for(j = 0; j < i; j++){
            if(vet[j] == vet[i]){
                printf("Os numeros nao devem repetir!\n");
                return 0;
            } 
        }
    }
    
    for(k = 0; k < 10; k++){
        printf("%d ", vet[k]);
    }
    
    printf("eh o vetor final!\n");
    return 0;
} 