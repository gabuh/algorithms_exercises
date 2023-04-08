/*
l) Elaborar um programa que efetue a apresenta�ao do valor da conversao em dolar de um valor lido em real. O programa deve solicitar o valor da cota�ao do dolar e tambem a quantidade de reais disponivel com o usuario, para que seja apresentado o valor em moeda americana.
*/

#include<stdio.h>

int main(){

float cotacao;
float quantidadeMoney;

    printf("Cotacao do dolar hoje: R$ ");
    scanf("%f",&cotacao);

    printf("\nTeu amount em real: R$ ");
    scanf("%f",&quantidadeMoney);

    printf("\nValor convertido to dollar: $ %f ",quantidadeMoney / cotacao);
    

    return 0;
}