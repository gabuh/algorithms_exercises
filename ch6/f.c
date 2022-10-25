/*f) Construir um programa que leia duas matrizes A e B do tipo vetor com 15 elementos quaisquer inteiros. Construir uma matriz C, sendo esta o resultado da junçao das matrizes A e B. Desta forma, a matriz C deve ter o dobro de elementos em relaçao às matrizes A e B, ou seja, a matriz C deve possuir 30 elementos. Apresentar a matriz C.*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 15

int main(){
  int A[TAM];
  int B[TAM];
  int C[TAM*2];

  for (int i=0; i<TAM; i++){
  	A[i]=rand()%10;
	B[i]=rand()%10;
  }

  for (int i=0; i<TAM*2; i++){
	  i<TAM?(C[i]=A[i]):(C[i]=B[i-TAM]);
  }

  for (int i=0; i<TAM; i++){
 	printf("%d ",A[i]);
  }
  printf("\n");

  for (int i=0; i<TAM; i++){
	printf("%d ",B[i]);
  }
  printf("\n");
  for (int i=0; i<TAM*2; i++){
  	printf("%d ",C[i]);
  }
  printf("\n");

return 0;	
}
