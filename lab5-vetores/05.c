#include <stdio.h>

int main(){
    
    int i, vet[50];
    
    for(i = 0; i < 50; i++){
        vet[i] = (i+5*i) % (i+1);
        printf("%d ", vet[i]);
        
    }
    printf("\n");
    return 0;
}