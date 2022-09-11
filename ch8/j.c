/*j) Elaborar um programa que leia uma matriz A de duas dimensoes com seis linhas e cinco colunas. Construir a matriz B de mesma dimensao, que deve ser formada do seguinte modo: para cada elemento par da matriz A deve ser somado 5 e de cada elemento impar da matriz A deve ser subtraido 4. Apresentar ao final as matrizes A e B.
*/
#include <stdio.h>
#include <stdlib.h>

#define lin 6
#define col 5

int main(){
  int A[lin][col];
  int B[lin][col];
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      A[i][j]=rand()%10;
    }
  }
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      if(A[i][j]%2 == 0){
        B[i][j]=A[i][j]+5;
      }else{
        B[i][j]=A[i][j]-4;
      }
    }
  }
  
  printf("A:");
  for(int i=0;i<lin;i++){
    printf(" ");
  }
  printf("\t B:\n");
  
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      printf("%d ",A[i][j]);
    }
    printf("\t");
    for(int j=0;j<col;j++){
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}