/*
s) Elaborar um programa que leia dois valores numericos reais desconhecidos representados pelas variaveis A e B. Calcular e apresentar os resultados das quatro opera��es aritmeticas basicas. 
*/

#include <stdio.h>

int main(){
    float A, B;

    printf("Type A value:");
    scanf("%f",&A);
    printf("\nType B value:");
    scanf("%f",&B);


    printf("\n A + B = %f",A+B);
    printf("\n A - B = %f",A-B);
    printf("\n A * B = %f",A*B);
    printf("\n A / B = %f",A/B);



    return 0;
}
