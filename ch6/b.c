/*
b) Elaborar um programa que leia oito elementos inteiros em uma matriz A do tipo vetor. Construir uma matriz B de mesma dimensao com os elementos da matriz A multiplicados por 3.0 elemento B[1] deve ser implicado pelo elemento A[1] * 3, o elemento B[2] implicado pelo elemento A[2] *3 e assim por diante, ate 8. Apresentar a matriz B.
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

int main(){
int A[SIZE];
int B[SIZE];

for(int i=0;i<SIZE;i++){
  A[i]=rand()%10;
  printf("%d ",A[i]);
}
printf("\n");

for(int i=0;i<SIZE;i++){
  B[i]=A[i]*3;
  printf("%d ",B[i]);
}

printf("\n");




 return 0;  
}
