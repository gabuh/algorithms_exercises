/*
s) Elaborar um programa que leia dez elementos numericos reais em uma matriz A do tipo vetor e apresente esses elementos por meio de pesquisa sequencial.
*/

#include<stdio.h>
#define TAM 10

int sequentialSearch(int vector[],int indexTotal,int value){
  int index;
  for (index=0;index<indexTotal;index++){
    if(vector[index]==value){
      return index;
    }
  }
  return -1;
}

int main(){
  int value,index;
  int A[TAM];
  
  printf("Put value in the array A:\n");
  for(int i=0;i<TAM;i++){
    scanf("%d",&A[i]);
    for(int ii=0;ii<i;ii++){
      printf("%d ",A[ii]);
    }
    printf("\n");
  }
  printf("\nSearch a Value in the array A: ");
  do{
    scanf("%d",&value);
    index=sequentialSearch(A,TAM,value);
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
  
  for(int i=0;i<TAM;i++){
    printf("%d ", A[i]);
  }
  
    
  return 0;
}