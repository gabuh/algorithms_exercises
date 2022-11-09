//w) Elaborar um programa que leia duas matrizes A e B de uma dimensao do tipo vetor com dez elementos inteiros cada. Construir uma matriz C de mesmo tipo e dimensao que seja formada pelo quadrado da soma dos elementos correspondentes nas matrizes A e B. Apresentar os elementos da matriz C.

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int power(int base, int expoent);

int main(){
  int A[TAM],B[TAM],C[TAM];
  
  for(int i=0;i<TAM;i++){
    A[i] = rand()%10;
    B[i] = rand()%10;
    printf("A: %d, B: %d \n",A[i], B[i]);
  }
  
  
  printf("C: \n");
  for(int i=0;i<TAM;i++){
    C[i] = power(A[i]+B[i],2);
    printf("(%d + %d)^2 = %d^2 = %d\n",A[i],B[i],A[i]+B[i],C[i]);
  }
    
    printf("\n");
  
  return 0;
}


int power(int base, int expoent){
  int p=1;
  for(int i=1; i<=expoent; i++){
    p = base * p;
  }
  return p;
}