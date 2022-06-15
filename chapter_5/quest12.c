/*m) Elaborar um programa que leia dez valores numericos reais e apresente no final o somatorio e a media dos valores lidos.
*/

/** 13/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: N,CONT;
 * @output: M,SUM;
 * GE:1
 * GR:1
 * */

#include<stdio.h>
int main(void){
int M;
int N;
int SUM;
int CONT=0;

    while(CONT<10){
        CONT++;
        scanf("%d",&N);
        SUM=SUM+N;
    }
    M=SUM/CONT;
    printf("\nThe total sum is: %d, and the Mean is: %d",SUM,M);
    
    return 0;
}