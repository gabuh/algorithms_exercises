/*h) Elaborar um programa que leia 20 elementos do tipo real em uma matriz A unidimensional e
construir uma matriz B de mesma dimensao com os mesmos elementos armazenados matriz A,      porem de forma invertida. Ou seja, o primeiro elemento da matriz A passa a ser o ultimo da
matriz B, o segundo elemento da matriz A passa a ser o penultimo da matriz B e assim por diante. Apresentar os elementos das matrizes A e B.*/

#include<stdlib.h>
#include<stdio.h>
#define TAM 20

int main(){
  int A[TAM];
  int B[TAM];

printf("A: ");
  for(int i=0; i<TAM; i++){
	  A[i]=rand()%10;
 	printf("%d ",A[i]);
  }
printf("\n");


printf("B: ");
  for(int i=0; i<TAM; i++){
	B[i] = A[TAM-(i+1)];
  	printf("%d ",B[i]);
  }
printf("\n");

return 0;
}
