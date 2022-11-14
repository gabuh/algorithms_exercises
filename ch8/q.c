//q) Elaborar um programa que fa�a a leitura de 20 valores inteiros em uma matriz A de duas dimensoes com quatro linhas e cinco colunas. Construir a matriz B de uma dimensao para quatro elementos que seja formada pelo somatorio dos elementos correspondentes de cada linha da matriz A. Construir tambem a matriz C de uma dimensao para cinco elementos que seja formada pelo somatorio dos elementos correspondentes de cada coluna da matriz A. Ao final o programa deve apresentar o somatorio dos elementos da matriz B com o somatorio dos elementos da matriz C.
#include<stdio.h>
#include<stdlib.h>

#define lin 4
#define col 5

int main(){
  int A[lin][col];
  int B[lin]; // summation from each matrix's line
  for(int i=0; i<lin; i++){
      B[i]=0;
  }
  int C[col];
  for(int j=0; j<col; j++){
      C[j]=0;
  }
  
  
  for(int i=0; i<lin; i++){ //Matrix A
    for(int j=0; j<col; j++){
      A[i][j] = rand()%10;
    }
  }
  
  for(int i=0; i<lin; i++){ // B summation
    for(int j=0; j<col; j++){
      B[i] = B[i] + A[i][j];
    }
  }

for(int j=0; j<col; j++){
  for(int i=0; i<lin; i++){ // C summation
      C[j] = C[j] + A[i][j];
    }
  }

  for(int i=0; i<lin; i++){ 
    for(int j=0; j<col; j++){
      printf("%d ",A[i][j]);
    }
    printf("= %d",B[i]);
    printf("\n");
    if(i==lin-1){
      printf("\n");
      for(int j=0; j<col; j++){
        printf("%d ",C[j]);
      }
    }
  }
  int sumRow, sumCol;
  sumRow = sumCol = 0;
  for(int i; i<lin; i++){
    sumRow = sumRow + B[i];
  }
  for(int j; j<col; j++){
    sumCol = sumCol + C[j];
  }
  printf("\n Row's Total: %d, Col's Total: %d\n",sumRow,sumCol);


  
  return 0;
}