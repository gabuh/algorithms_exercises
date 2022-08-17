/*
b) Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensao para sete elementos inteiros. Construir uma matriz C de duas dimensoes, cuja primeira coluna deve ser formada pelos elementos da matriz A e a segunda coluna pelos elementos da matriz B. Apresentar a matriz C.
*/
#include<stdio.h>
#define lin 7
#define col 2
int main(){
  int A[lin];
  int B[lin];
  int C[lin][col];
  printf("Column A:\n");
  for(int i=0;i<lin;i++){
    scanf("%d",&A[i]);
  }
  printf("Column B:\n");
  for(int i=0;i<lin;i++){
    scanf("%d",&B[i]);
  }
  for(int c=0;c<col;c++){
    for(int l=0;l<lin;l++){
      if(c==0){
        C[l][c]=A[l];
      }else if(c==1){
        C[l][c]=B[l];
      }
    }        
  }
      
    for(int l=0;l<lin;l++){
  for(int c=0;c<col;c++){
      printf("%d ",C[l][c]);
    }
    printf("\n");
  }
  return 0;
}