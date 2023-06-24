#include <stdio.h>

int main(){

    int mes, dia;
    char bi;

    printf("Insira mes e dia: ");
    scanf("%d%d", &mes, &dia);
    fflush(stdin);
    printf("O ano eh bissexto? (Y ou N): ");
    scanf("%s", &bi);

    if((mes > 12) || (dia > 31)){ 
        printf("Mes invalido!\n");
        return 0;
    }

    
    if ((bi == 'N') && ((mes = 2) && (dia == 29))){
        printf("O mes eh invalido!\n");

    } else if ((bi == 'N') && ((mes = 2) && (dia <= 28)) || ((dia <= 31) && (mes > 0) && (mes <= 12))){
        printf("O mes eh valido!\n");

    }  else if((bi == 'Y') && ((mes = 2) && (dia <= 29)) && ((dia <= 30) && (mes > 0) && (mes <= 12))){
        printf("O mes eh valido!\n");

    } else if ((bi == 'Y') && ((mes = 2) && (dia <= 29)) || ((dia = 31) && (mes > 0) && (mes <= 12))){
        printf("O mes eh valido!\n");

    } else (printf("O mes eh invalido!\n"));
    
    

    return 0; 
}