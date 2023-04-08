/*
k) Elaborar um programa que efetue a apresenta�ao do valor da conversao em real de um valor lido em dolar. O programa deve solicitar o valor da cota�ao do dolar e tambem a quantidade de dolares disponivel com o usuario, para que seja apresentado o valor em moeda brasileira.
*/

#include<stdio.h>

int main(){

float cotacao;
float quantidadeMoney;

    printf("Cotacao do dolar hoje: R$ ");
    scanf("%f",&cotacao);

    printf("\nTeu amount em real: R$ ");
    scanf("%f",&quantidadeMoney);

    printf("\nValor convertido: R$ %f ",quantidadeMoney * cotacao);
    

    return 0;
}