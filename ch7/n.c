/*n) Elaborar um programa que leia tr�s matrizes A, B e C de uma dimensao do tipo vetor com 15 elementos inteiros cada. Construir uma matriz D de mesmo tipo e dimensao que seja formada pela soma dos elementos correspondentes �s matrizes A, B e C. Montar o trecho de pesquisa binaria para pesquisar os elementos existentes na matriz D.
*/

#include<stdio.h>
#define TAM 14

int binarySearch(int vector[],int value,int indexTotal){
int start=0;
int index;
while(start<=indexTotal){
    index=(start+indexTotal)/2;
    if(vector[index]==value){
      return index;
    }
    if(vector[index]<value){
      start = index +1;
    }else{
      indexTotal = index -1;
    }
  }
  return -1;
}

int main(){
  int A[TAM];
  int B[TAM];
  int C[TAM];
  int D[TAM];
  int value,index,temp;
  
  printf("A values\n"); //A
  for(int i=0;i<TAM;i++){
    scanf("%d",&A[i]);
  }
  printf("B values\n"); //B
  for(int i=0;i<TAM;i++){
    scanf("%d",&B[i]);
  }
  printf("C values\n"); //C
  for(int i=0;i<TAM;i++){
    scanf("%d",&C[i]);
  }
  for (int i=0;i<TAM;i++){//making D
    D[i]=A[i]+B[i]+C[i];  
    printf("%d + %d + %d = %d \n",A[i],B[i],C[i],D[i]);
  }
  for(int i=0;i<TAM;i++){ //sorting D
    temp=D[i];
    for(int ii=0;ii<TAM;ii++){
      if(D[ii]>D[i]){D[i]=D[ii];D[ii]=temp;temp=D[i];}
    }
  }
  do{
    scanf("%d",&value);
    index=binarySearch(D,value,TAM);
    if(index>=0){
      printf("\nitem found\n");
    for(int i=0;i<TAM;i++){
      if(i==index){
        printf("v");
        break;
      }else if(D[i]<=9){
        printf("  ");
      }else if(D[i]<=99){
        printf("   ");
      }else if(D[i]<=999){
        printf("    ");
      }
    }
      printf("\n");
    }else{
      printf("\nitem not found\n");
    }
    
  }while(index<0);
  
  for(int i=0;i<TAM;i++){ printf("%d ",D[i]); }
  printf("\n");
  return 0;
}