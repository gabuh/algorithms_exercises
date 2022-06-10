/*
d) Efetuar o calculo da quantidade de litros de combustivel gasta em uma viagem, 
utilizando um automovel que faz 12 Km por litro. Para obter o calculo, o usuario deve fornecer o tempo gasto (TEMPO) e a velocidade media (VELOCIDADE) 
durante a viagem. Desta forma, sera possivel obter a distancia percorrida com a formula DISTANCIA <--  TEMPO * VELOCIDADE. Possuindo o valor da distancia, 
basta calcular a quantidade de litros de combustivel utilizada na viagem com a formula LITROS_USADOS <--  DISTANCIA / 12. Ao final, o programa deve apresentar
 os valores da  velocidade media (VELOCIDADE), tempo gasto na viagem (TEMPO), a distancia percorrida (DISTANCIA) e a quantidade de litros (LITROS_USADOS) 
 utilizada na viagem.
*/
#include <stdio.h>

int main(void){
    int time;
    int speed;
    int distance;
    int liter;

    printf("How much time did the trip take?: ");
    scanf("%d",&time);
    printf("\nWhat was the car's speed ?: ");
    scanf("%d",&speed);
    distance=time*speed;
    liter=distance/12;
    printf("\nYou spent %d liter of gas oil.\nTook %d time to arrive.\nReached %d of distance.\nAll of it running at %d km/h.\n",liter,time,distance,speed);




}