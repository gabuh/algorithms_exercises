/*
l) Elaborar um programa que leia uma matriz A de duas dimensoes com 15 linhas e 15 colunas. Apresentar o somatorio dos elementos pares situados na diagonal principal da referida matriz.
*/
#include <stdio.h>
#include <stdlib.h>

#define lin 15
#define col 15

int main(){
  int A[lin][col];
  int diagonalSumation=0;
  
  for(int i=0;i<lin;i++){ //Inserting random values
    for(int j=0;j<col;j++){
      A[i][j]=rand()%10;
    }
  }
  
  for(int i=0;i<lin;i++){ //printing A
    for(int j=0;j<col;j++){
      if(i==j && A[i][j]%2==0){
        printf("%d<",A[i][j]);      
      }else{
        printf("%d ",A[i][j]);      
      }
    }
    printf("\n");
  }

    printf("\n");

  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      if(i==j && A[i][j]%2==0){
          diagonalSumation=diagonalSumation+A[i][j];
          printf("+ %d ", A[i][j]);
      }
    }
  }
  printf(" = %d\n", diagonalSumation);
  
  
  
}