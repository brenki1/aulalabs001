#include <stdio.h>

int main(){

    int i, i2, i3, *ii3, *ii, *ii2;

    ii = &i;
    ii2 = &i2;
    ii3 = &i3;

    printf("Insira tres numeros inteiros: ");
    setbuf(stdin, NULL);
    scanf("%d%d%d", ii, ii2, ii3);

    if((*ii > *ii2) && (*ii > *ii3) && (*ii2 > *ii3)){
        printf("em ordem crescente: %d %d %d\n", *ii3, *ii2, *ii);
    } else if((*ii2 > *ii) && (*ii2 > *ii3) && (*ii > *ii3)){
        printf("em ordem crescente: %d %d %d\n", *ii3, *ii, *ii2);
    } else if((*ii3 > *ii) && (*ii3 > *ii2) && (*ii > *ii2)){
        printf("em ordem crescente: %d %d %d\n", *ii2, *ii, *ii3);
    } else if((*ii > *ii2) && (*ii > *ii3) && (*ii3 > *ii2)){
        printf("em ordem crescente: %d %d %d\n", *ii2, *ii3, *ii);
    } else if((*ii2 > *ii) && (*ii2 > *ii3) && (*ii3 > *ii)){
        printf("em ordem crescente: %d %d %d\n", *ii, *ii3, *ii2);
    } else if((*ii3 > *ii) && (*ii3 > *ii2) && (*ii2 > *ii)){
        printf("em ordem crescente: %d %d %d\n", *ii, *ii2, *ii3);
    }
return 0;
}