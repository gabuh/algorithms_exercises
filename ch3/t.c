/*
 t) Construir um programa que calcule e apresente em metros por segundo o valor da velocidade de um projetil que percorre uma dist�ncia em quil�metros a um espa�o de tempo em minutos. Utilize a formula VELOCIDADE (DIST�NCIA* 1000) / (TEMPO * 60).
*/

#include<stdio.h>


int main(){

    float speed, distance, time;

    printf("Distance Km:");
    scanf("%f",&distance);
    printf("\nTime minutes:");
    scanf("%f",&time);
    speed = (distance * 1000) / (time*60);
    printf("Speed = %f",speed);

    return 0;
}

