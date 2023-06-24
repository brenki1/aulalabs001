#include <stdio.h>

int main(){

    float l1, l2, l3;

    printf("Insira tres lados de um triangulo: ");
    scanf("%f%f%f", &l1, &l2, &l3);

    if((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l2))
       printf("o triangulo existe!\n");
    else printf("o triango nao existe!\n");
    
    if((l1 == l2) && (l1 == l3) && (l2 == l3))
       printf("o triangulo eh equilatero!\n");
    if(((l1 == l3) && (l2 != l3)) || ((l1 == l2) && (l1 != l3)))
       printf("O triangulo eh isosceles!\n");
    if((l1 != l3) && (l1 !=l2) && (l3 != l2))
       printf ("O triangulo eh escaleno!\n");




    return 0;
}