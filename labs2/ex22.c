#include <stdio.h>

int main(){

    int ts, idade; //ts = tempo de serviço

    printf("Insira a idade e tempo de servico (em anos): ");
    scanf("%d%d", &idade, &ts);

    if(idade >= 65)
       printf("Pode aposentar!\n");
    else if(ts >= 30)
       printf("Pode aposentar!\n");
    else if((idade >= 60) && (ts >= 25))
       printf("Pode aposentar!\n");
    else printf("Nao pode aposentar!\n");

    return 0;
}