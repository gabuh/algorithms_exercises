/*
m) Elaborar um programa que leia duas matrizes A e B de uma dimensao do tipo vetor com 12 elementos reais cada. Construir uma matriz C de mesmo tipo e dimensao que seja formada pelo produto de cada elemento correspondente �s matrizes A e B. Montar o trecho de pesquisa sequencial para pesquisar os elementos existentes na matriz C.
*/

#include<stdio.h>

#define TAM 12
 
int sequentialSearch(int vector[],int value,int indexTotal){
int index=0;
do{   
  if(vector[index]==value){ return index; }
   else{index++;}
  }while(index<indexTotal);
 return -1;
}
 
 int main(){
   int index;
   int value;
   int A[TAM];
   int B[TAM];
   int C[TAM];
for(int i=0;i<TAM;i++){
  scanf("%d",&A[i]);
  for(int ii=0;ii<=i;ii++){
    printf("%d ",A[ii]);
  }
printf(">\n");
}
for(int i=0;i<TAM;i++){
  scanf("%d",&B[i]);
  for(int ii=0;ii<=i;ii++){
    printf("%d ",B[ii]);
  }
printf(">\n");

}

for(int i=0;i<TAM;i++){
  C[i]=A[i]*B[i];
}
printf("\nVector C created\n");

   
  do{
    printf("\nSearch a number in C: ");
    scanf("%d",&value);
    index=sequentialSearch(C,value,TAM);
    if(index<0){printf("\nitem not found\n");}
    else{
      printf("\nItem has been found:\n");
      for(int i=0;i<TAM;i++){
        if(i==index){
          printf("v");
          break;
        }else if(C[i]<9){
          printf("  ");
        }else if(C[i]<99){
          printf("   ");
        }else if(C[i]<999){
          printf("    ");
        }
      }
      printf("\n");
      for(int i=0;i<TAM;i++){
        printf("%d ",C[i]);
      }
      printf("\n");
    }
  }while(index<0);
   
   return 0;
 }