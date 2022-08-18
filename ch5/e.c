/*e) Elaborar um programa que apresente todos os valores numericos inteiros impares situados na faixa de 0 a 20. 
Sugestao: para verificar se o valor numerico e impar, dentro do laço de repetiçao, fazer a verificaçao logica 
dessa condiçao com a instru�ao se/fim_se dentro do proprio laço, perguntando se o valor numerico do contador e
impar (se e diferente de zero); sendo, mostre-o, nao sendo, passe para o proximo valor numerico. Para saber se um 
valor numerico e impar, use o metodo de calculo de divisibilidade do valor numerico por 2.
*/

/** 12/06/2022
 * Nome: Gabriel N.  Page: [https://github.com/gabuh]
 * Variables
 * Entrada
 * N:integer
 * Saida
 * N:integer
 *  
 * Inicio
 * 
 * Para N de 0 ate 20 passo 1 faça
 *      SE (N -2 (N div 2) .não. = 0)
 *          Escreva(N)
 *      FIM_SE
 * fim_para
 * fim
 * 
 * 
 */

#include <stdio.h>

int main(void){
    for (int N=0; N <= 20; N++){
        if ((N-2*(N/2)) != 0){
            printf("This is an Odd number: %d\n",N);
        }
    }
 return 0;
}

