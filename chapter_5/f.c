/*f) Construir um programa que apresente todos os valores numericos divisiveis por 4 e menores que 200.
 Sugestao: a variavel que controla o contador do la�o de repeti�ao deve ser iniciada com valor 1.
*/

/** 12/06/2022
 * Nome: Gabriel N. Page:[https://github.com/gabuh]
 * Variables 
 * Input/output
 * N: integer
 * 
 * Inicio
 * N ← 1
 * Enquanto (N < 200) Faca
 *      Se (N-4*(N / 4) = 0) faca
 *          escreva(N)
 *      fim_se
 * fim_enquanto
 * Fim
 */
#include<stdio.h>

int main(void){

    for (int N=1; N<200; N++){
        if((N-4*(N/4)==0)){
            printf("\n%d",N);
        }
    }

    return 0;
}