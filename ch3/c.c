// c) Calcular e apresentar o valor do volume de uma lata de oleo, utilizando a formula:
// Volume Raio ** Altura 2 <-- PI.


#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void main(){
    float volume;
    float raio;
    float altura;
    
    printf("Raio: ");
    scanf("%f",&raio);

    printf("\nAltura: ");
    scanf("%f",&altura);

    volume = PI * pow(altura,2) * raio; 
    
    printf("\n volume: %f",volume);


}