/*n) Elaborar um programa que leia sucessivamente valores numericos e apresente no final o somatorio, a media e o total de valores lidos.
 O programa deve ler os valores enquanto o usuario estiver fornecendo valores positivos.
  Ou seja, o programa deve parar quando o usuario fornecer um valor negativo (menor que zero).
*/
/** 13/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: CONT,N;
 * @output: M,SUM;
 * GE:1
 * GR:2
 * */
#include <stdio.h>
int main(void){

int CONT;
int SUM;
int N;
int M;
do{
    scanf("%d",&N);
    if(N>0){
        SUM=SUM+N;
        CONT++;
    }
} while(N>-1);
    printf("%d",CONT);
    M=SUM/CONT;
    printf("The total sum is: %d, and the Mean is: %d",SUM,M);

    return 0;
}