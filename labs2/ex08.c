#include <stdio.h>

int main(){
    
    float x, y, media;
    printf("Insira as duas notas(entre 0 a 10): ");
    scanf("%f%f", &x, &y);

    media = (x + y)/2;

    
    if((x > 0) && (y <= 10) && (x <= 10) && (y > 0))
       printf("a media eh %f\n", media);

    else
       printf("As notas devem ser entre 0.0 e 10.0!\n");
    
    return 0;
}