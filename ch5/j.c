/*j) Elaborar um programa que apresente os valores de conversao de graus Celsius em graus
Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus Celsius e finalizando em
cem graus Celsius. O programa deve apresentar os valores das duas temperaturas.
*/
/** 14/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: ;
 * @output: F,C;
 * GE:1
 * GR:1
 * */
#include<stdio.h>
int main(void){
int C;
int F;
    for (C=10;C<100;C=C+10){
        F=(9*C+160)/5;
        printf("%d Celsius em Fahrenheit is %d.\n",C,F);
    }
    return 0;
}