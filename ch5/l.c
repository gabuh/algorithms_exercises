/*L) Elaborar um programa que leia quinze valores numericos inteiros e no final apresente
 o somatorio da fatorial de cada valor lido.
*/
/** 14/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: N;
 * @process: FAC,F,CONT;
 * @output: SUM;
 * GE:2
 * GR:2
 * */

#include <stdio.h>

int main(void){
int FAC;
int F;
int SUM=0;
int N;

    for (int CONT=0; CONT<15; CONT++){
        scanf("%d",&N);
        FAC=1;
        F=1;
        for (FAC;FAC<=N;FAC++){
            F=F*FAC;
            SUM=F+SUM; 
        }
    printf("%d! = %d\n",N,F);
    }   
    printf("The sum of all factorial numbers typed is: %d",SUM);
    return 0;
}
