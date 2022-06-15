/*p) Elaborar um programa que apresente os resultados da soma e da media aritmetica dos valores pares situados na 
faixa numerica de 50 ate 70.
*/
/** 13/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: CONT2, CONT, SUM;
 * @output: M, SUM;
 * GE:1
 * GR:2
 * */
#include<stdio.h>
int main(void){
int CONT2;
int SUM;
float M;

    for (int CONT=50; CONT < 70; CONT++){
        if( CONT-2*(CONT/2) == 0){
            SUM=SUM+CONT;
            CONT2++;
        }
    }
    M=(SUM/CONT2);
    printf("The Total Sum is: %d, and the Mean is: %f.",SUM,M);

    return 0 ;
}