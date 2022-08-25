/*
d) Elaborar um programa que leia uma matriz A de uma dimensao com dez elementos inteiros. Construir uma matriz C de duas dimensoes com tr�s colunas, sendo a primeira coluna da matriz C formada pelos elementos da matriz A somados com 5, a segunda coluna seja formada pelo valor do colculo da fatorial de cada elemento correspondente da matriz A e a terceira e ultima coluna pelos quadrados dos elementos correspondentes da matriz A. Apresentar a matriz C.
*/

#include<stdio.h>
#define lin 10
#define col 3

int factorial(int n){
  int f=1;
  for(int i=0;i<n;i++){
   f=f*n; 
  }
  return f;
}

int poww(int p,int n){
  int num=1;
  for(int i=0;i<p;i++){
    num=n*num;
  }
  return num;
}

int main(){
  int A[lin];
  int C[lin][col];
  for (int i=0;i<lin;i++){
  scanf("%d",&A[i]);
  }
  
  for (int l=0;l<lin;l++){
    for(int c=0;c<col;c++){
      C[l][0]=A[l]+5;
      C[l][1]=factorial(A[l]);
      C[l][2]=poww(2,A[l]);
    }
  }
  
  for (int l=0;l<lin;l++){
    for(int c=0;c<col;c++){
      printf("%d ",C[l][c]);
    }
    printf("\n");
  }

  
  return 0;
}