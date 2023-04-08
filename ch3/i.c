/*
i) Efetuar a leitura de um valor numero e apreseta o resultado do valor lido elevado ao quadrado.
*/

#include<stdio.h>
#include<math.h>

int main(){
    int value;

    printf("Type a number: ");
    scanf("%d",&value);

    printf("Here is %d ^ 2 = %f",value, pow((double)value, 2) );


    return 0;
}