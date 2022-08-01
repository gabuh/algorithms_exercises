/*o) Construir um programa que apresente como resultado a fatorial dos valores impares situados na faixa numerica de 1 ate 10.
*/
/** 13/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: CONT,FAC,F;
 * @output: CONT,F;
 * GE:2
 * GR:2
 * */
#include <stdio.h>
int main(void){

int FAC;
int F;
    for (int CONT=1;CONT<10;CONT++){
        if(CONT-2*(CONT/2) != 0){
            FAC=1;
            F=1;
            for(FAC;FAC<=CONT;FAC++){
                F=F*FAC;
            }
        printf("Factorial number of %d, is: %d\n",CONT,F);
        }  
    }
    return 0;
}
