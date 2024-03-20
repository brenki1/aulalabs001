#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    int n1, n2, n3;
} notas;

int main(){

    int i, MF[4];
    notas aluno[4];

    FILE *arqAlunos;

    arqAlunos = fopen("notas.txt", "r");
    for(i = 0; i < 4; i++){
        fscanf(arqAlunos, "%s %d %d %d", aluno[i].nome, &aluno[i].n1, &aluno[i].n2, &aluno[i].n3);
    }
    fclose(arqAlunos);

    for(i = 0; i < 4; i++){
        MF[i] = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3;
    }

    for(i = 0; i < 4; i++){
        if(MF[i] >= 6){
            printf("O aluno %s foi APROVADO!\n", aluno[i].nome);

        } else printf("O aluno %s foi REPROVADO!\n", aluno[i].nome);
    }
}
