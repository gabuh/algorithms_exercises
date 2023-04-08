/*
h) Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da formula VOLUME <--  COMPRIMENTO * LARGURA * ALTURA.
*/

#include <stdio.h>

int main(){
float C;
float L;
float A;

    printf("Comprimento: ");
    scanf("%f",&C);
    printf("\nLargura: ");
    scanf("%f",&L);
    printf("\nAltura: ");
    scanf("%f",&A);

    printf("O Volume e : %f", C*L*A);


    return 0;
}