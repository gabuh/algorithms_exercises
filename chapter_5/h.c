/*h) Escrever um programa que apresente como resultado a pot�ncia de uma base qualquer elevada a um expoente qualquer,
 ou seja, de BE, em que B e o valor da base e E o valor do expoente. Considere apenas a entrada de valores inteiros e positivos,
  ou seja, de valores naturais. Sugestao: nao utilize o formato "base ^ expoente", pois e uma solu�ao muito trivial.
   Use a tecnica de la�o de repeti�ao, em que o valor da base deve ser multiplicado o numero de vezes determinado no expoente.
*/
/** 14/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: B, E;
 * @process: CONT;
 * @output: B,E,R;
 * GE:2
 * GR:2
 * */
#include<stdio.h>
int main(void){
int B;
int E;
int R=1;
    puts("Type the base B");
    scanf("%d",&B);
    printf("Type the exponent of %d\n",B);
    scanf("%d",&E);
    for(int CONT=0;CONT<E;CONT++){
        R=R*B;
    }
printf("\nThe base %d powered by %d is :%d",B,E,R);
    
    return 0;

}
/* OUTPUT
Type the base B
8
Type the exponent of 8
2

The base 8 powered by 2 is :64
*/