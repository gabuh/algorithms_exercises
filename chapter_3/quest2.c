/**
 * @file quest2.c
 * @author Gabriel (Gabu) (https://github.com/gabuh)
 * @brief 
 * @version 0.1
 * @date 2022-06-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*c) Calcular e apresentar o valor do volume de uma lata de oleo, utilizando a formula:
Volume Raio ** Altura 2 <-- PI.
*/

#include <stdio.h>
#include <math.h>


int main(void){
    
    int radius;
    int height;
    float pi=3.14159265;
    float volume;

    puts("Type the radius:");
    scanf("%d",&radius);
    puts("Type the height:");
    scanf("%d",&height);
    
    volume=pi*pow(radius,2)*height;

    printf("\nVolume is %f.\n",volume);



}
