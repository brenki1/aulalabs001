#include <stdio.h>
#include <math.h>

int main(){

    int x, y, z, i;
    float mg, mp, ma;
    long double mh;

    printf("Insira tres numeros inteiros positivos: ");
    scanf("%d%d%d", &x, &y, &z);

    if((x < 0) || (y < 0) || (z < 0)){
        printf("Os 3 numeros devem ser positivos!\n");
        return 0;
    }

    do{
        printf("Escolha uma opcao\n");
        printf("(1) Media geometrica\n");
        printf("(2) Media ponderada\n");
        printf("(3) Media harmonica\n");
        printf("(4) Media aritmetica\n");
        scanf("%d", &i);
    if((i < 1) || (i > 4)){
        printf("Opcao invalida!\n");
        printf("\n");
    }
    }while((i < 1) || (i > 4));

    if(i == 1){
      mg = cbrt(x*y*z);
      printf("A media geometrica desses numeros eh %f\n", mg);
      return 0;

    } else if(i == 2){
           mp = ((1*x)+(2*y)+(3*z))/3;
           printf("A media ponderada desses numeros eh %f\n", mp);
           return 0;

    } else if(i == 3){
           mh = 1/ 1/x + 1/y + 1/z;
           printf("A media harmonica desses numeros eh %Lf\n", mh);
           return 0;

    } else if(i == 4){
           ma = (x+y+z)/3;
           printf("A media aritmetica desses numeros eh %f\n", ma);
        
    }

    

    return 0;
}