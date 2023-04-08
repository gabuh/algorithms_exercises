/*
p) Elaborar um programa que leia o valor numerico correspondente ao salario mensal (variavel SM) de um trabalhador e tambem fa�a a leitura do valor do percentual de reajuste (variavel PR) a ser atribuido. Apresentar o valor do novo salario (variavel NS).
*/


#include<stdio.h>

int main(){
    float income;

    float adjust;

    printf("Type ur income $: ");
    scanf("%f",&income);
    printf("\nType the percent adjust: %%");
    scanf("%f",&adjust);

    
    printf("\nType the adjust of %d%% is: %f ", (int) adjust,((income/100) * adjust) + income);


    return 0;
}