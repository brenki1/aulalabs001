#include <stdio.h>

int main(){
    int i, soma;
    soma = 0;
    

    for(i = 0; i <= 50; i++){
        if(i % 2== 0){
            soma += i;
            printf("%d ", soma);
            
        }      
    }
    printf("O ultimo numero eh a soma dos pares!\n");
    return 0;
}