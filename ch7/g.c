/*
g) Elaborar um programa que leia 20 elementos numericos inteiros em uma matriz A do tipo vetor. Construir uma matriz B de mesma dimensao com os mesmos elementos da matriz A acrescidos de 2. Colocar os elementos da matriz B em ordem crescente. Montar um trecho de pesquisa binaria para pesquisar os elementos armazenados na matriz B.
*/

#include <stdio.h>
#define TAM 20

int busca(int valor, int indexTotal,int vetor[]){
  int control=0;
  int valorDaBusca,index,temp;
  while(control <= indexTotal){
    index = (control + indexTotal)/2;
    if(vetor[index]==valor){
      return index;
    }
    if(vetor[index] < valor){
      control = index + 1;
    }else{
      indexTotal = index - 1;   
    }
    
  }
  
  return -1;
}






int main(){
  int A[TAM];
  int B[TAM];
  int temp, element_Found_Index;
  
  printf("\nAdicione elementos ao vetor A:\n");
  for (int i=0;i<TAM;++i){
    scanf("%d",&A[i]);
    for (int ii=0;ii<=i;++ii){
      printf("%d ",A[ii]);
    }
    printf("> ");
  }
  
  
  for (int i=0;i<TAM;++i){ // inserting elements in B
    B[i]=A[i]+2;
  }
  printf("\nVetor B craido com sucesso com cada elemento de A acrescido de 2\n");
  
  for (int i=0;i<TAM;i++){
    temp=B[i];
    for(int ii=0;ii<TAM;++ii){
      if(temp<B[ii]){
        B[i]=B[ii];
        B[ii]=temp;
        temp=B[i];
      }
    }
  }
  
  
  
  printf("\nDigite um elemento para buscar em B:");
  scanf("%d",&temp);
  if(TAM%2==0){
    element_Found_Index=busca(temp,TAM,B);
  }else{
    element_Found_Index=busca(temp,TAM-1,B);
  }
  if(element_Found_Index==-1){
    printf("\nElement not found.\n");
  }else{
  printf("\nEcontrado:\n");
    for(int i=0;i<TAM;i++){
      if(i==element_Found_Index){
        printf("v");
      }else if(B[i]<9){
        printf("  ");
      }else if(B[i]<99){
        printf("   ");
      }else if(B[i]<999){
        printf("    ");
      }
      
    }
  }
  printf("\n");
for (int i=0;i<TAM;i++){
    printf("%d ",B[i]);
  }
  printf("\n");
  return 0;
}