/**
 * @file quest4.c
 * @author Gabriel (Gabu) (https://github.com/gabuh)
 * @brief 
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*e) Efetuar o calculo e a apresenta�ao do valor de uma presta�ao em atraso, utilizando a formula 
PRESTACAO <--  VALOR + (VALOR * TAXA/100) * TEMPO).
*/
#include<stdio.h>
int main(void){
    int value;
    int tax;
    int time;
    int finalBill;

    puts("What is the Bill's Value?");
    scanf("%d",&value);
    puts("How much time of delay?");
    scanf("%d",&time);
    puts("How much is the tax?");
    scanf("%d",&tax);
    
    finalBill=value+(value*tax/100)*time;

    printf("\nSo you will pay R$%d Reais.",finalBill);
    
}