/*r) Elaborar um programa que leia valores positivos inteiros ate que um valor negativo seja informado. Ao final devem ser apresentados o maior e o menor valores informados pelo usuario.
*/
/** 13/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @integer: CONT,N,MIN,MAX;
 * @input: N;
 * @output: MIN,MAX;
 * GE:2
 * GR:5
 * */
#include <stdio.h>

int main(void){

int N;
int CONT = 0;
int MAX;
int MIN;
do{
    scanf("%d",&N);
    if (CONT = 0){
        MIN = N;
        MAX = N;
    }
    CONT++;
    if (N < MIN){
        MIN=N;
    }else if(N > MAX){
        MAX=N;
    }
} while(N > -1);
printf("The greatest number typed was, %d\nThe smallest number typed was, %d",MAX,MIN);

    return 0;
}