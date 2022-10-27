/*j) Elaborar um programa que leia uma matriz A do tipo vetor com 20 elementos inteiros. Construir uma matriz B do mesmo tipo e dimensao da matriz A, sendo cada elemento da matriz B do somatorio de 1 ate o valor do elemento correspondente armazenado na matriz A. Se o valor do elemento da matriz A[1] for 5, o elemento correspondente da matriz B[1] deve ser 15, pois o somatorio do elemento da matriz A e 1+2+3+4+5. Apresentar os elementos da matriz B.*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 20

int summation(int n){
 int s=0;
  for(int i=1; i<=n; i++){
 	  s=s+i;
  }
 return s;
}

int main(){

  int A[TAM];
  int B[TAM];

 for(int i=0; i<TAM; i++){
	A[i] = rand()%10;
	B[i] = summation(A[i]);
	printf("%d s-> %d\n",A[i],B[i]);
 }

 return 0; 
}
