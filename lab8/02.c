#include <stdio.h>

int main(){

    int i = 2, *i2;
    float r= -1.2, *r2;
    char c = 'F', *c2;

    i2 = &i;
    r2 = &r;
    c2 = &c;

    printf("antes da modificacao %d\n, %f\n, %c\n", *i2, *r2, *c2);

    (*i2)++;
    (*r2)++;
    (*c2)++;

    printf("Apos a modificacao usando incremento (++): %d\n %f\n %c\n", *i2, *r2, *c2);
return 0;
}