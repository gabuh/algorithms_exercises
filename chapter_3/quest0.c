/**
 * @file quest0.c
 * @author Gabriel (Gabu) (https://github.com/gabuh)
 * @brief 
 * @version 0.1
 * @date 2022-06-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
a) Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Fahrenheit. 
A formula de conversao e F <--  (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.


Variables : integer tempCel; 
*/
#include <stdio.h>

int main(void){
    int tempCel;

    printf("Type the current temperature (Celsius): ");
    scanf("%d",&tempCel);
    printf("\nThe current temperature on Fahrenheit is %d\n",(9*tempCel+160)/ 5);


}