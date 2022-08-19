/*
o) Escrever um programa que leia 15 elementos do tipo inteiro em uma matriz A e apresentar os elementos da matriz utilizando 
a pesquisa binaria.
*/
#include<stdio.h>
#define TAM 15

int binarySearch(int vector[],int value,int indexTotal){
  int start=0;
  int index,index_b;
  while(index!=index_b){
  index_b=index;
  index=(start+indexTotal)/2;
  if(vector[index]==value){
    return index;
  }else if(value>vector[index]){
    start=index;
  }else if(value<vector[index]){
    indexTotal=index;
  }
}
  return -1;
}

int main(){
  int index,value,temp;
  int A[TAM];
  
  printf("\nType here the A values:\n");
  for(int i=0;i<TAM;i++){
    scanf("%d",&A[i]);
    for(int ii=0;ii<=i;ii++){
      printf("%d ",A[ii]);
    }
    printf(">\n");
  }
  
  for(int i=0;i<TAM;i++){
    temp=A[i];
    for(int ii=0;ii<TAM;ii++){
      if(A[i]<A[ii]){
        A[i]=A[ii];
        A[ii]=temp;
        temp=A[i];
      }
    }
  }
  
  
   do{
   printf("Search a Value:\n");
    scanf("%d",&value);
    index=binarySearch(A,value,TAM);
    if(index>=0){
      printf("\nitem found\n");
    for(int i=0;i<TAM;i++){
      if(i==index){
        printf("v");
        break;
      }else if(A[i]<=9){
        printf("  ");
      }else if(A[i]<=99){
        printf("   ");
      }else if(A[i]<=999){
        printf("    ");
      }
    }
      printf("\n");
    }else{
      printf("\nitem not found\n");
    }
  
  }while(index<0);
 
  for(int i=0;i<TAM;i++){ printf("%d ",A[i]); }
 
  return 0;
}