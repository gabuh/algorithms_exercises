/*
p) Elaborar um programa que leia uma matriz A com dez elementos do tipo cadeia. Construir uma matriz B de mesma dimensao e tipo que a matriz A. O ultimo elemento da matriz A deve ser o primeiro da matriz B, o penultimo elemento da matriz A deve ser o segundo da matriz B ate que o primeiro elemento da matriz A seja o ultimo da matriz B. Apresentar os elementos da matriz B de forma ordenada ascendente.
*/
#include <stdio.h>
#include <string.h>

int searchIndex(char compChar2){
  char abc[]={"abcdefghijklmnopqrstuvwxyz"};
  for (int i=0;i<26;i++){
      if(abc[i]==compChar2){
        return i;
      }
  }
return 0;
}


int main(){
  char A[100];
  char B[100];
  int index;
  int len=100;
  char temp,temp1,temp2;
  
  printf("Type sothing bellow:\n");
  scanf("%s",A);
  len=strlen(A);

printf("\nVector B\n");
for(int i=0;i<len;i++){
  B[i]=A[(len-1)-i];
}
for(int i=0;i<len;i++){
  printf("%c ",B[i]);
}
  printf("\n");
  for(int i=0;i<len;i++){
    temp=B[i];
    for(int ii=0;ii<len;ii++){
     if(searchIndex(B[i])<searchIndex(B[ii])){
        B[i]=B[ii];
       B[ii]=temp;
       temp=B[i];
     }
    }
  }
  printf("\nB Ascending:\n");
  for(int i=0;i<len;i++){
    printf("%c",B[i]);
  }
  
  printf("\n");
  return 0;
}