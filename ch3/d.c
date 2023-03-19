// d) Efetuar o calculo da quantidade de litros de combustivel gasta em uma viagem, utilizando um automovel que faz 12 Km por litro. Para obter o calculo, o usuario deve fornecer o tempo gasto (TEMPO) e a velocidade media (VELOCIDADE) durante a viagem. Desta forma, sera possivel obter a dist�ncia percorrida com a formula DISTANCIA <--  TEMPO * VELOCIDADE. Possuindo o valor da dist�ncia, basta calcular a quantidade de litros de combustivel utilizada na viagem com a formula LITROS_USADOS <--  DISTANCIA / 12. Ao final, o programa deve apresentar os valores da  velocidade media (VELOCIDADE), tempo gasto na viagem (TEMPO), a dist�ncia percorrida (DISTANCIA) e a quantidade de litros (LITROS_USADOS) utilizada na viagem.


#include <stdio.h>
#include <math.h>

#define consumo 12

void main(){
    float tempo;
    float velocidade;
    float litro;
    
    printf("Tempo de viagem em horas: ");
    scanf("%f",&tempo);

    printf("\n Velocidade constante do veiculo: ");
    scanf("%f",&velocidade);

    litro = (velocidade * tempo) / consumo; 
    
    printf("\n Litro consumido: %f",litro);


}