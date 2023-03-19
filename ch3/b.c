// b) Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius. A formula de conversao e C <--  (F - 32) * (5/9) , sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

void main(){
    float f;
    float c;
    
    scanf("%f",&f);


    c = (f-32) * (5/9);

    printf("%f",c);


}