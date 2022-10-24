/*e) Elaborar um programa que leia uma matriz A do tipo vetor com 15 elementos inteiros. Construir uma matriz B de mesmo tipo, e cada elemento da matriz B deve ser o resultado da fatorial correspondente de cada elemento da matriz A. Apresentar as matrizes A e B.
 */
#include<stdio.h>
#include<stdlib.h>
#define TAM 15

int factorial(n){
  int f=1;
  for(int i=1;i<=n;i++){
	f=f*i;
  }

return f;
}


int main(){
  int A[TAM];
  int B[TAM];

  for(int i=0; i<TAM; i++){
	  A[i] = rand()%10;
	  B[i] = factorial(A[i]);
  	  printf("%d! = %d \n",A[i],B[i]);
  }
  





return 0;
}
