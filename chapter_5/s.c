/*s) Elaborar um programa que apresente o resultado inteiro da divisao de dois numeros quaisquer, representando o dividendo e o divisor da divisao a ser processada. Sugestao: para a elabora�ao do programa, nao utilize o operador aritmetico de divisao com quociente inteiro DIV.
Use uma solu�ao baseada em la�o de repeti�ao. O programa deve apresentar como resultado (quociente) quantas vezes o divisor cabe no dividendo.
*/
#include <stdio.h>
int main(void){

int DIV;
int D;
int R;
int Q=0;

printf("Digite o numero a ser dividido: ");
scanf("%d",&DIV);
printf("\n%d Dividido por ?\n",DIV);
scanf("%d",&D);
R=DIV;

    for(int i=0; R >= D;i++ ){
        Q++;
        R=R-D;  
    }


printf("\nO quociente e %d",Q);
printf("\nO resto e%d",R);
printf("\nO dividendo e %d",DIV);
printf("\nO divisor e %d",D);

return 0;
}