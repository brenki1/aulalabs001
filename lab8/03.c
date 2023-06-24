#include <stdio.h>

int main(){

    int i, i2, *ii, *ii2;

    ii = &i;
    ii2 = &i2;

    if(ii > ii2){
        printf("%p eh maior que %p\n", ii, ii2);
    } else if(ii2 > ii){
        printf("%p eh maior que %p\n", ii2, ii);
    }
return 0;
}