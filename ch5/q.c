/*q) Escrever um programa que possibilite calcular a area total em metros de uma resid�ncia com os c�modos sala, cozinha, banheiro, dois quartos, area de servi�o, quintal, garagem, entre outros que podem ser fornecidos ao programa. O programa deve solicitar a entrada do NAME, da largura e do comprimento de um determinado c�modo. Em seguida, deve apresentar a area do c�modo lido e tambem uma mensagem solicitando ao usuario a confirma�ao de continuar calculando novos c�modos. Caso o usuario responda "NaO", o programa deve apresentar o valor total acumulado da area residencial.
*/

/** 13/06/2022
 * Name: Gabriel N. page:[https://github.com/gabuh]
 * Variables
 * @characters: NAME;
 * @integer: L,C,AT,AC,OP;
 * @input: MOME,OP,L,C;
 * @output: AC,AT,NAME;
 * GE:2
 * GR:2
 * */
#include <stdio.h>
int main(void){
char NAME[15];
int OP;
float L;
float C;
float AT;
float AC;
    do{
        printf("\nType the name of your room: ");
        scanf("%s",NAME);
        printf("\nType the size of one side of the room: ");
        scanf("%f",&C);
        printf("\nType the size of the other room's side: ");
        scanf("%f",&L);
        AC = L*C;
        AT = AT+AC;
        printf("%s Has the total area of %f, Do you wanna keep measuring?(Y(1)/N(2)):",NAME,AC);
        scanf("%d",&OP);

    }while(OP != 2);
    printf("\nThe total Rooms' area is %f",AT);

    return 0;
}