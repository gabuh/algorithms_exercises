/*
i) Elaborar um programa que leia 15 elementos inteiros. Construir uma matriz B de mesmo tipo, em que cada elemento seja a metade de cada elemento da matriz A. Apresentar os elementos da matriz A em ordem decrescente e os elementos da matriz B em ordem crescente.
*/
#include <stdio.h>
#define TAM 5

int main(){
  float A[TAM];
  float B[TAM];
  float temp;
  
  for(int i=0;i<TAM;i++){
    scanf("%f",&A[i]);
    for(int ii=0;ii<=i;ii++){
      printf("%f ",A[ii]);
    }
    printf("> \n");
  }
  
  
  for(int i=0;i<TAM;i++){
    B[i]=(A[i]/2);
  }
  
  for(int i=0;i<TAM;i++){
    temp=B[i];
    for(int ii=0;ii<TAM;ii++){
      if(B[i]>B[ii]){
        B[i]=B[ii];
        B[ii]=temp;
        temp=B[i];
      }
    }
  }
  
  printf("\nB:\n");
  for(int i=0;i<TAM;i++){
    printf("%f ",B[i]);
  }
  
  
  
  return 0;
}