/*o) Escrever um programa que leia 25 elementos (valores reais) para temperaturas em graus Celsius e armazene esses valores em uma matriz A de uma dimensao do tipo vetor. Construir uma matriz B de mesmo tipo e dimensao, em que cada elemento da matriz B deve ser a conversao da temperatura em graus Fahrenheit do elemento correspondente da matriz A. Apresentar os elementos das matrizes A e B.*/

#include<stdio.h>
#include<stdlib.h>

#define TAM 25

int main(){
  float A[TAM];
  float B[TAM];

  for(int i=0; i<TAM; i++){
    A[i] = rand()%10;
    B[i] = (9*A[i]+160)/5;
    printf("Celsius %f --> Fahrenheit %f \n",A[i],B[i]);
  }


return 0;
}
