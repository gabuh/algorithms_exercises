//z) Elaborar um programa que leia uma matriz A de uma dimensao com dez elementos numericos inteiros. Apresentar o total de elementos impares existentes na matriz e tambem o percentual do valor total de numeros impares em rela�ao � quantidade total de elementos armazenados.
#include<stdio.h>
#include<stdlib.h>

#define TAM 15

int main(){
  int A[TAM];
  int imparesTotal = 0;
  
  for(int i=0; i<TAM; i++){
    A[i] = rand()%10;
    if(A[i] % 2 != 0){
      printf("%d< ",A[i]);
      imparesTotal++;
    }else{
      printf("%d ",A[i]);
    }
  }
  printf("\nTotal de impares:%d -> %f%%\n",imparesTotal,(float)(imparesTotal*TAM)/100);
  
  return 0;
}