#include <stdio.h>
#include <string.h>

typedef int claudas;

claudas main(){

    int i;
    char nome[100], nomaiusculo[100], nominusculo[100], nomeOG[100];
    char *p = nome;

    

    printf("Insira seu nome completo: ");
    setbuf(stdin, NULL);
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    strcpy(nomeOG, nome);

    //maiusculo
    for(i = 0; *(p+i) != '\0'; i++){
        if(*(p+i) >= 'a' && *(p+i) <= 'z'){
            *(p+i) -= 32;
        }
    }

    strcpy(nomaiusculo, nome);

    //minusculo
    for(i = 0; *(p+i) != '\0'; i++){
        if(*(p+i) >= 'A' && *(p+i) <= 'Z'){
            *(p+i) += 32;
        }
    }

    strcpy(nominusculo, nome);

    printf("Nome: %s\nNome em maiusculo: %s\nNome em minusculo: %s\n", nomeOG, nomaiusculo, nominusculo);

    return 0;
}