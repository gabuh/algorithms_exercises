/*
d) Elaborar um programa que leia uma matriz A de uma dimensao com dez elementos inteiros. Construir uma matriz C de duas dimensoes com tr�s colunas, sendo a primeira coluna da matriz C formada pelos elementos da matriz A somados com 5, a segunda coluna seja formada pelo valor do colculo da fatorial de cada elemento correspondente da matriz A e a terceira e ultima coluna pelos quadrados dos elementos correspondentes da matriz A. Apresentar a matriz C.
*/

#include<stdio.h>
#define lin 10
#define col 3

int factorial(int n){
  int f=1;
  for(int i=1;i<=n;i++){
   f=f*i; 
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
      if(c==0){
      C[l][c]=A[l]+5;
      }else if(c==1){
      C[l][c]=factorial(A[l]);
      }else if(c==2){
      C[l][c]=poww(2,A[l]);
      }
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