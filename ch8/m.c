/*m) Elaborar um programa que leia uma matriz A do tipo real de duas dimensoes com cinco linhas e cinco colunas. Apresentar o somatorio dos elementos situados nas posi�oes de linha e coluna impares da diagonal principal (A[1,1], A[3,3], A[5,5]) da referida matriz.
*/

#include<stdio.h>
#include<stdlib.h>

#define lin 5
#define col 5

int main(){
  int A[lin][col];
  int summation=0;
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      // A[i][j]=rand()%10;
      A[i][j]=3;
    }
  }
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      if(i==j && A[i][j]%2!=0){
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
      if(i==j && A[i][j]%2!=0){
        summation=summation+A[i][j];
      printf("%d ",A[i][j]);
      i<lin-1&&j<col-1?printf("+"):printf("");
      }
    }
  }
  printf("= %d\n",summation);
  
  
  
  return 0;
}