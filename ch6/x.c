// x) Elaborar um programa que leia uma matriz A de uma dimensao com seis elementos do tipo real. Construir uma matriz B, em que cada posi�ao de indice impar da matriz B deve ser atribuida com um elemento de indice par existente na matriz A e cada posi�ao de indice par da matriz B deve ser atribuida com um elemento de indice impar existente na matriz A. Apresentar os elementos das duas matrizes.
#include <stdio.h>
#include <stdlib.h>

#define TAM 6

int main(){
  int A[TAM], B[TAM];
  printf("A, B\n");
  for (int i=0; i<TAM; i++){
    A[i] = 2;
    B[i] = 0;
    printf("%d, %d\n",A[i],B[i]);
  }

  for (int i=0; i<TAM; i++){
    if(i%2==0 && i<TAM-1){
      B[i+1] = A[i];
      A[i+1] = B[i];
    }
    
  }
  
  
  printf("\nA, B\n");
  for (int i=0; i<TAM; i++){
    printf("%d, %d\n",A[i],B[i]);
  }
  
  
  printf("\n");
  
  return 0;
}