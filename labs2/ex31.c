#include <stdio.h>

int main(){

    float altura, peso;

    printf("Insira sua altura e peso: ");
    scanf("%f%f", &altura, &peso);

    if((altura < 1.20) && (peso <= 60)){
        printf("Sua classificacao eh A\n");
        return 0;

    } else if((altura < 1.20) && (peso > 60) && (peso <= 90)){
        printf("Sua classificacao eh D\n");
        return 0;

    } else if((altura < 1.20) && (peso > 90)){
        printf("Sua classificacao eh G\n");
        return 0;

    }

    if((altura >= 1.20) && (altura <= 1.70) && (peso <= 60)){
        printf("Sua classificacao eh B\n");
        return 0;

    } else if((altura >= 1.20) && (altura <= 1.70) && (peso > 60) && (peso <= 90)){
        printf("Sua classificacao eh E\n");
        return 0;

    } else if((altura >= 1.20) && (altura <= 1.70) && (peso > 90)){
        printf("Sua classificacao eh H\n");
        return 0;

    }
    
    if((altura > 1.70) && (peso <= 60)){
        printf("Sua classificacao eh C\n");
        return 0;

    } else if((altura > 1.70) && (peso > 60) && (peso <= 90)){
        printf("Sua classificacao eh F\n");
        return 0;

    } else if((altura > 1.70) && (peso > 90)){
        printf("Sua classificacao eh I\n");
    }

    return 0;
}