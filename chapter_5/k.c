/*k) Escrever um programa que calcule e apresente o somatorio do numero de graos de trigo que se pode obter num tabuleiro de xadrez, obedecendo � seguinte regra: colocar um grao de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro
quadro coloca-se um grao, no segundo quadro colocam-se dois graos (neste momento t�m-se
tr�s graos), no terceiro quadro colocam-se quatro graos (tendo neste momento sete graos), no quarto quadro colocam-se oito graos (tendo-se entao 15 graos) ate atingir o sexagesimo quarto quadro (este exercicio foi baseado numa situa�ao exposta no capitulo 16 do livro "O Homem que Calculava" de Malba Tahan, da Editora Record).
*/
/** 14/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @input: ;
 * @process: QUAD;
 * @output: SUM;
 * GE:1
 * GR:2
 * */
#include <stdio.h>

int main(void){
float SUM = 0;

    for (int QUAD=1;QUAD<64;QUAD++){
        if(SUM==0){
            SUM++;
            printf("\nPut: %f",SUM);
        }
        SUM = SUM*2;
        printf("\nPut: %f",SUM);
    }
    printf("\nThe sum is: %f",SUM);

    return 0;
}