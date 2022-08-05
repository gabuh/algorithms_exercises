/*
e) Escrever um programa que leia duas matrizes A e B do tipo vetor com elementos do tipo cadeia, sendo a matriz A com 20 elementos e a matriz B com 30 elementos. Construir uma matriz C, sendo esta a jun�ao das matrizes A e B. Desta forma, a matriz C deve ter a capacidade de armazenar 50 elementos. Apresentar os elementos da matriz C em ordem descendente.
*/
#include<stdio.h>
#define BTAM 30
#define ATAM 20
#define CTAM BTAM+ATAM



int main(){
  int A[ATAM];
  int B[BTAM];
  int C[CTAM];
  int temp;
  
  printf("Valores para o vetor A:\n");
  for(int i=0; i<ATAM; i++){
    scanf("%d",&A[i]);
    for (int ii=0;ii<=i;ii++){
      printf("%d ",A[ii]);
    }
  printf(">\n");
  }
  
  printf("\nValores para o vetor B:\n");
  for(int i=0; i<BTAM; i++){
    scanf("%d",&B[i]);
    for (int ii=0;ii<=i;ii++){
      printf("%d ",B[ii]);
    }
  printf(">\n");
  }
  
  //building vector C
  for(int i=0; i<CTAM;i++){
    if(i<ATAM){
      C[i]=A[i];
    }else{
      C[i]=B[i-ATAM];
    }
  }
  
  for(int i=0; i<CTAM;i++){
    temp=C[i];
    for(int ii=0;ii<CTAM;ii++){
      if(C[ii]<C[i]){
        C[i]=C[ii];
        C[ii]=temp;
        temp=C[i];
      }
    }
  }
  printf("\nVetor C: \n");
  for (int i=0;i<CTAM;i++){
    printf("%d ",C[i]);
  }
  printf(">\n");
  
  return 0;
}