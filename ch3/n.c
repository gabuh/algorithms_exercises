/*
n) Construir um programa que leia tr�s valores numericos inteiros (representados pelas variaveis A,B e C) e apresente como resultado final o valor do quadrado da soma dos tr�s valores lidos.
*/

#include<stdio.h>
#include<math.h>

int main(){
    int A, B, C;

    printf("First Value: ");
    scanf("%d",&A);

    printf("\nSecond Value: ");
    scanf("%d",&B);

    printf("\nThird Value: ");
    scanf("%d",&C);

    printf("(First Value) + (Second Value) + (Third Value) ^ 2 = %f", pow((double) A + B + C, 2));

    return 0;
}