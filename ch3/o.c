/*
o) Elaborar um programa que leia quatro valores numericos inteiros (variaveis A, B, C e D). Ao final o programa deve apresentar o resultado do produto (variavel P) do primeiro com o terceiro valor, e o resultado da soma (variavel S) do segundo com o quarto valor.
*/

#include<stdio.h>

int main(){
    int A, B, C, D, P, S;

    printf("First Value: ");
    scanf("%d",&A);

    printf("\nSecond Value: ");
    scanf("%d",&B);

    printf("\nThird Value: ");
    scanf("%d",&C);

    printf("\nFourth Value: ");
    scanf("%d",&D);

    P = A + C;

    S = B + D;

    printf("\nFirst + Third = %d, Second + Fourth = %d\n", P, S);

    return 0;
}