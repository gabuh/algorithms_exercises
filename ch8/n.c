/*
n) Elaborar um programa que leia uma matriz A de duas dimensoes com sete linhas e sete colunas. Ao final apresentar o total de elementos pares existentes na matriz.
*/
#include<stdio.h>
#include<stdlib.h>

#define lin 7
#define col 7

int main(){
  int A[lin][col];
  int count=0;
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      A[i][j]=rand()%10;
    }
  }
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      if(A[i][j]%2==0){
        count++;
      }
    }
  }
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      if(A[i][j]%2==0){
        printf("%d<",A[i][j]);
      }
      else{
        printf("%d ",A[i][j]);
      }
    }
    printf("\n");
  }
  printf("\nOdd total: %d \n",count);
  
  return 0;
}