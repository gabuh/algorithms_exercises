// s) Elaborar um programa que leia duas matrizes A e B de uma dimensao com seis elementos. A matriz A deve aceitar apenas a entrada de valores pares, enquanto a matriz B deve aceitar apenas a entrada de valores impares. A entrada das matrizes deve ser validada pelo programa e nao pelo usuario. Construir uma matriz C que seja o resultado da jun�ao das matrizes A e B, de modo que a matriz C contenha 12 elementos. Apresentar os elementos da matriz C.

#include<stdio.h>
#include<stdlib.h>

#define TAM 6

int main(){
  int A[TAM], B[TAM], C[TAM*2];

  for(int i=0; i<TAM; i++){
    A[i]=1; B[i]=4;
    while(A[i]%2 != 0){
      A[i] = rand()%10;
    }
    while(B[i]%2 == 0){
      B[i] = rand()%10;
    }
  printf("A %d B %d\n",A[i],B[i]);
    
  }
  
  printf("\n");
  
  for(int i=0; i<TAM*2; i++){
    if(i<TAM){
      C[i] = A[i];
    }else if(i<TAM*2){
      C[i] = B[i-(TAM)];
    }
  }
  
  for(int i=0; i<TAM*2; i++ ){
    printf("%d ",C[i]);
  }
 printf("\n"); 
  
  return 0;
}
