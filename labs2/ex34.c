#include <stdio.h>

int main(){

    int faltas;
    float nota;

    printf("Insira as faltas e sua nota: ");
    scanf("%d%f", &faltas, &nota);

    if((nota >= 9 ) && (nota <= 10) && (faltas <= 20)){
        printf("O seu conceito eh A\n");
        return 0;
    } else if ((nota >= 9 ) && (nota <= 10) && (faltas > 20)){
        printf("O seu conceito eh B\n");
        return 0;

    }
    if((nota >= 7.5) && (nota <= 8.9) && (faltas <= 20)){
        printf("O seu conceito eh B\n");
        return 0;

    } else if((nota >= 7.5) && (nota <= 8.9) && (faltas > 20)){
        printf("O seu conceito eh C\n");
        return 0;

    } 
    if((nota >= 5.0) && (nota <= 7.4) && (faltas <= 20)){
        printf("O seu conceito eh C\n");
        return 0;

    } else if((nota >= 5.0) && (nota <= 7.4) && (faltas > 20)){
        printf("O seu conceito eh D\n");
        return 0;

    } 
    if((nota >= 4.0) && (nota <= 4.9) && (faltas <= 20)){
        printf("O seu conceito eh D\n");
        return 0;

    } else if((nota >= 4.0) && (nota <= 4.9) && (faltas > 20)){
        printf("O seu conceito eh E\n");
        return 0;

    }
    if((nota >= 0.0) && (nota <= 3.9) && (faltas <= 20)){
        printf("O seu conceito eh E\n");
        return 0;

    } else if((nota >= 0.0) && (nota <= 3.9) && (faltas > 20)){
        printf("O seu conceito eh E\n");

    }

    return 0;
}