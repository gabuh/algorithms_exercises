/**
 * @file quest1.c
 * @author Gabriel (Gabu) (https://github.com/gabuh)
 * @brief 
 * @version 0.1
 * @date 2022-06-09
 * @copyright Copyright (c) 2022
 * 
 * 
 */

/*b) Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius. 
A formula de conversao e C <--  (F - 32) * 5)/9) , sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/
#include <stdio.h>

int main(void){
    float tempFah;

    printf("Type the current temperature (Fahrenheit): ");
    scanf("%f",&tempFah);
    float tempCel = ((tempFah-32)*5)/9;
    printf("\nThe current temperature on Fahrenheit is %f\n",tempCel);


}