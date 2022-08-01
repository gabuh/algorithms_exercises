/*g) Elaborar um programa que apresente os resultados das pot�ncias do valor de base 3, elevado a um expoente
 que varie do valor 0 ate o valor 15. O programa deve apresentar os valores 1, 3, 9. 27,..., 14.348.907. Sugestao:
  leve em considera�ao as defini�oes matematicas do calculo de pot�ncia, em que qualquer valor numerico diferente de 
  zero elevado a zero e 1, e todo valor numerico elevado a 1 e ele proprio. Nao use em hipotese nenhuma o operador 
  aritmetico de exponencia�ao apresentado no capitulo 3; resolva o problema com a tecnica de la�o.
*/
/** 14/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input:;
 * @process: N,i;
 * @output: R;
 * GE:2
 * GR:3
 * */
#include<stdio.h>

int main(void){
int E=3;
int N=0;
int R=1;
    do{
        if (N==0){
            printf("%d ",N+1);
        }
        N++;
        R=1;
        for (int i=1;i<=N;i++){
        R=R*E;
        }
        printf("%d ",R);
    }while(N!=15);
    return 0;
}
/*OUTPUT
1 3 9 27 81 243 729 2187 6561 19683 59049 177147 531441 1594323 4782969 14348907 
*/