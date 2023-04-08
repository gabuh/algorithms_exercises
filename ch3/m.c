/*
m) Elaborar um programa que efetue a leitura de tr�s valores (A,B e C) e apresente como resultado final o quadrado da soma dos tr�s valores lidos.
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

    printf("(First Value ^ 2) + (Second Value ^ 2) + (Third Value ^ 2) = %f", pow((double)A,2) + pow((double)B,2) + pow((double)C,2));

    return 0;
}