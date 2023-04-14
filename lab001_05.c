#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float i;
    float quintaparte;

    printf("Insira um número real: ");
    scanf("%f", &i);

    quintaparte = i / 5;
    printf("a quinta parte desse número é %f", quintaparte);

    return 0;
}