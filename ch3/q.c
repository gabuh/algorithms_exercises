/*
q) Elaborar um programa que calcule e apresente o valor do resultado da area de uma circunfer�ncia (variavel A). O programa deve solicitar a entrada do valor do raio da circunfer�ncia (variavel R). Para a execu�ao deste problema utilize a formula A -> 3.14159265* R ^ 2.
*/

#include<stdio.h>
#include<math.h>

int main(){
    float R;

    printf("Digite Circuferencia: ");
    scanf("%f",&R);


    printf("Area is: %f sqh", 3.14159265 * pow((double) R,2));


    return 0;
}