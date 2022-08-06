/*i) Escrever um programa que apresente os valores da sequ�ncia numerica de Fibonacci ate o decimo quinto termo. A sequ�ncia de Fibonacci e formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
89, 144, 233, 377, ... etc., obtendo-se o proximo termo a partir da soma do termo atual com o anterior sucessivamente ate o infinito se a sequ�ncia nao for interrompida. Utilize para este exercicio as variaveis ATUAL, ANTERIOR e PRoXIMO.
*/
/** 14/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: ;
 * @process: ANTERIOR, ATUAL,CONT;
 * @output: PROXIMO;
 * GE:3
 * GR:2
 * */
#include<stdio.h>

int main(void){
int ATUAL=1;
int ANTERIOR=0;
int PROXIMO;
    for (int CONT=1;CONT<=15;CONT++){
        PROXIMO=ANTERIOR+ATUAL;
        printf("%d - ",PROXIMO);
        ANTERIOR=ATUAL;
        ATUAL=PROXIMO;
    }
    return 0;
}