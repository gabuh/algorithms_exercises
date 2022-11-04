/*n) Elaborar um programa que leia 20 elementos (valores reais) para temperaturas em graus Celsius e armazene esses valores em uma matriz A de uma dimensao. O programa ao final deve apresentar a menor, a maior e a media das temperaturas lidas.
 */

#include<stdio.h>
#include<stdlib.h>

#define TAM 20

int main(){
  float temps[TAM];
  float max_Value, media_Value, sum_Value;
  max_Value = media_Value = sum_Value = 0;

  for(int i=0; i<TAM; i++){
  	temps[i] = rand()%10;
  }

  int cont = 0;
  while(cont < TAM){
	if(temps[cont] > max_Value){
		max_Value = temps[cont];
	}
	sum_Value = temps[cont] + sum_Value;
	cont++;
  }
	
  for(int i=0; i<TAM; i++){
	printf("%f ",temps[i]);
  }
  printf("\n");

  printf("\nMedia: %f, Valor Max: %f \n",(float)sum_Value/TAM, max_Value);

return 0;
}
