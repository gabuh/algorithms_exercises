/*l) Elaborar um programa que leia uma matriz A do tipo vetor com dez elementos inteiros. Construir uma matriz B de mesmo tipo, em que cada elemento deve ser a metade exata de cada um dos elementos existentes da matriz A. Apresentar os elementos das matrizes A e B.*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int main(){
 int A[TAM];
 float B[TAM];

 printf("A  |  B\n");
 for(int i=0; i<TAM; i++){
  A[i] = rand()%10;
  B[i] = (double) A[i]/2;
  printf("%d --> %f\n",A[i],B[i]);
 }


return 0;
}
