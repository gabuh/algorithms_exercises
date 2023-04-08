/*
j) Ler dois inteiros (variaveis A e B) e imprimir o resultado do quadrado da diferen�a do primeiro valor pelo segundo.
*/

#include<stdio.h>
#include<math.h>

int main(){
    int A, B;

    printf("First Value: ");
    scanf("%d",&A);

    printf("Second Value: ");
    scanf("%d",&B);

    printf("First Value ^ 2 - Second Value ^ 2 = %f", pow((double)A,2) - pow((double)B,2));

    return 0;
}