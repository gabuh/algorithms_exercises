//v) Construir um programa que leia uma matriz A de uma dimensao do tipo vetor com 30 elementos do tipo inteiro. Ao final do programa, apresentar a quantidade de valores pares e impares existentes na referida matriz.

#include<stdio.h>
#include<stdlib.h>

#define TAM 30

int main(){
  int A[TAM];
  int contPar,contImp;
  contImp = contPar = 0;
  printf("\nA: ");
  for(int i=0; i<TAM; i++){
    A[i] = rand()%10;
    printf("%d ",A[i]);
    A[i]%2==0?contPar++:contImp++;
  }
  printf("\n");
  
  printf("Quantidade Pares %d, Quantidade Impares %d\n",contPar, contImp);
  
  
  return 0;
}