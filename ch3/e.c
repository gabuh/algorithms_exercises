// e) Efetuar o calculo e a apresenta�ao do valor de uma presta�ao em atraso, utilizando a formula PRESTACAO <--  VALOR + (VALOR * TAXA/100) * TEMPO).


#include <stdio.h>

void main(){
    float tempo;
    float taxa;
    float valor;
    float prestacao;

    printf("Tempo de atraso em dias: ");
    scanf("%f",&tempo);

    printf("\n Valor de taxa em %%: ");
    scanf("%f",&taxa);

    printf("\n Valor da prestacao %%: ");
    scanf("%f",&valor);

    prestacao = valor + (valor * (taxa / 100) * tempo); 
    
    printf("\n Valor atual: %f",prestacao);


}