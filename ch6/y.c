//y) Escrever um programa que leia uma matriz A de uma dimensao com 15 elementos numericos inteiros. Apresentar o total de elementos pares existentes na matriz.
#include<stdio.h>
#include<stdlib.h>

#define TAM 15

int main(){
  int A[TAM];
  int paresTotal = 0;
  
  for(int i=0; i<TAM; i++){
    A[i] = rand()%10;
    //printf("%d ",A[i]);
    if(A[i] % 2 == 0){
      printf("%d< ",A[i]);
      paresTotal++;
    }else{
      printf("%d ",A[i]);
    }
  }
  printf("\nTotal de pares:%d \n",paresTotal);
  
  
  
}