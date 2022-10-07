/*
c) Escrever um programa que leia duas matrizes (denominadas A e B) do tipo vetor com 20 elementos reais. Construir uma matriz C, sendo cada elemento da matriz C a subtra�ao de um elemento correspondente da matriz A com um elemento correspondente da matriz B, ou seja, a opera�ao de processamento deve estar baseada na opera�ao C[I] <-- A[1] - B[I]. Ao final, apresentar os elementos da matriz C.
*/

#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

int main(){
  int A[SIZE];
  int B[SIZE];
  int C[SIZE];
  
  printf("A:");
  for(int i=0;i<SIZE;i++){
    A[i]=rand()%10;
    printf("%d ",A[i]);
  }
  printf("\n\n");
  printf("B:");
  for(int i=0;i<SIZE;i++){
    B[i]=rand()%10;
    printf("%d ",B[i]);
  }
  printf("\n\n");
  
  printf("C:\n");
  for(int i=0;i<SIZE;i++){
    C[i]=A[i]-B[i];
    printf("%d - %d = %d\n",A[i],B[i],C[i]);
    
  }
  printf("\n");
  
  return 0;
}