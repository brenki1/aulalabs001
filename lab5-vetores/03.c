#include <stdio.h>

int main(){
    
    int vet[6], vet_inverso[6], i, k;

    for(i=0; i < 6; i++){
        printf("insira um numero: ");
        setbuf(stdin, NULL);
        scanf("%d", &vet[i]);
    }
    for(i = 0, k = 5; i < 6 && k >= 0; i++, k--){
        vet_inverso[i] = vet[k];
        printf("%d ", vet_inverso[i]);
    }
  

    return 0;
}