/*
g) Elaborar um programa que leia uma matriz A de duas dimensoes com quatro linhas e cinco colunas, armazenando nessa matriz os valores das temperaturas em graus Celsius. Construir a matriz B de mesma dimensao, em que cada elemento seja o valor da temperatura em graus Fahrenheit de cada elemento correspondente da matriz A. Apresentar ao final as matrizes A e B.
*/

#include<stdio.h>

#define lin 4
#define col 5

double function(int n){
  double f;
  f=(9*n+160)/5;
  return f;
}

int main(){
  int A[lin][col];
  int B[lin][col];

for(int i=0;i<lin;i++){
  for(int j=0;j<col;j++){
  scanf("%d",&A[i][j]);
  B[i][j]=function(A[i][j]);
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