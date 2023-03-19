// a) Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Fahrenheit. A formula de conversao e F <--  (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.


#include <stdio.h>

void main(){
    float cel;
    float  fah;

    scanf("%f",&cel);

    fah = (9 * cel + 160) / 5;


    printf("%f",fah);   

}