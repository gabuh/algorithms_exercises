// f) Ler dois valores (inteiros, reais ou caracteres) para as variaveis A e B, e efetuar a troca dos valores de forma que a variavel A passe a possuir o valor da variavel B e a variavel B passe a possuir o valor da variavel A. Apresentar os valores trocados.


#include <stdio.h>


void main(){
    int A;
    int B;
    int temp;

    printf(" A value: ");
    scanf("%d",&A);

    printf("\n B value: ");
    scanf("%d",&B);

    printf("\n A = %d , B  = %d ",A,B);
    
    temp = A;
    A = B;
    B = temp;

    printf("\n Depois de trocados: ");
    printf("\n A = %d , B  = %d ",A,B);
}