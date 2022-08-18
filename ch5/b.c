/*b) Elaborar um programa que mostre os resultados da tabuada de um numero qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.
*/

/** 12/06/2022
 * Name: Gabriel N. Page:[https://github.com/gabuh]
 * Variables
 * Entrada
 * N: integer
 * V: integer
 * Saida
 * R: integer
 * 
 * Inicio
 *  leia(N)
 *  para V de 1 ate 10 passo 1 faca
 *      R ← N*10
 *      escreva(R)
 *  fim_para
 * Fim
 **/


#include <stdio.h>
int main(void){
    int N;
    puts("Type a number and see THE MAGIC !");
    scanf("%d",&N);
    for (int V = 1; V <= 10; V++)
    {
        printf("%d*%d=%d\n",N,V,V*N);
    }
    
    return 0;
}
/*OUTPUT
Type a number and see THE MAGIC !
4
4*1=4
4*2=8
4*3=12
4*4=16
4*5=20
4*6=24
4*7=28
4*8=32
4*9=36
4*10=40
*/

