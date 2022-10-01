/*
o) Elaborar um programa que leia uma matriz A do tipo real de duas dimensoes com oito linhas e
 seis colunas. Construir a matriz B de uma dimensao que seja formada pela soma de cada linha
 da matriz A. Ao final apresentar o somatorio dos elementos da matriz B.
*/

#include <stdio.h>
#include <stdlib.h>


#define lin 8
#define col 6

int main(){

int A[lin][col];
int B[lin];
int sum;


for(int i=0;i<lin;i++){
  for(int j=0;j<col;j++){
   A[i][j]=rand()%10; 
  }
}

for(int i=0;i<lin;i++){
  sum=0;
  for(int j=0;j<col;j++){
    sum=A[i][j]+sum; 
  }
    B[i]=sum;
}

for(int i=0;i<lin;i++){
  for(int j=0;j<col;j++){
   printf("%d ",A[i][j]); 
  }
  printf(" = %d",B[i]);
  printf("\n");
}





return 0;
}
