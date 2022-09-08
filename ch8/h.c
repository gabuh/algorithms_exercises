/*
h) Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensoes com cinco linhas e cinco colunas. Construir uma matriz B de mesma dimensao, em que cada elemento seja o dobro de cada elemento correspondente da matriz A, com exce�ao dos valores situados na diagonal principal (posi�oes B[1,1], B[2,2], B[3,3], B[4,4] e B[5,5]), os quais devem ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.
*/

#include<stdio.h>
#define lin 5
#define col 5

int main(){
  int A[lin][col];
  int B[lin][col];
  
  printf("Just type some int values:\n");
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&A[i][j]);
    
    }
    
    for(int ii=0;ii<=i;ii++){
      for(int jj=0;jj<col;jj++){
        printf("%d ",A[ii][jj]);
      }
      printf("\n");
    }
  }

  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      if(i==j){
        B[i][j]=A[i][j]*3;
      }else{
        B[i][j]=A[i][j]*2;
      }
    }
  }
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }

  return 0;
}