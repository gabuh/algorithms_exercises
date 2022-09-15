/*i) Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensoes com sete linhas e sete colunas. Construir a matriz B de mesma dimensao, em que cada elemento seja o somatorio de 1 ate o valor armazenado na posi�ao da matriz A, com exce�ao dos valores situados nos indices impares da diagonal principal (B[1,1], B[3,3], B[5,5] e B[7,7]), os quais devem ser o fatorial de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.
*/
#include<stdio.h>
#include<stdlib.h>

#define lin 7
#define col 7

int main(){
  int A[lin][col];
  int B[lin][col];
  
  
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      A[i][j]=0;
    }
  }

  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      if(i==j && j%2!=0){
        // B[i][j]=factorial(A[i][j]);
        B[i][j]=0;
      }else{
        for(int ii=0;ii<=i+j;ii++){
          B[i][j]=A[i][j]+ii;
        }
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