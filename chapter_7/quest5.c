/*
f) Elaborar um programa que leia 30 elementos numericos reais em uma matriz A do tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguinte lei de forma�ao: todo elemento da matriz B deve ser o cubo do elemento correspondente da matriz A. Montar o trecho de pesquisa sequencial para pesquisar os elementos armazenados na matriz B.
*/

#include<stdio.h>
#define TAM 30

int powering(int x,int p){
   int number=1;
  for(int i=1;i<=p;++i){
    number=number*x;
  }

  return number;
}



int main(){
  int A[TAM];
  int B[TAM];
  int E;
  int position=-1;
  
  for(int i=0;i<TAM;++i){
    scanf("%d",&A[i]);
    for(int ii=0;ii<=i;ii++){
      printf("%d ",A[ii]);
    }
    printf(">");
  }
  printf("\n");
  
  for (int i=0;i<TAM;i++){
    B[i]=powering(A[i],3);
  }
  

printf("\nDigite um numero para pesquisar no array B: ");
scanf("%d",&E);
for(int i=0; i<TAM;i++){
 if(E==B[i]){
   position=i;
   printf("%d, Achado na posicao: %d \n",B[i],position);
   break;
  }
} 
if(position == -1){
  printf("Elmento nao encontrado\n");
}

  for (int i=0;i<TAM;++i){
    if(i==position){
      printf("v ");
    }else if(B[i]<10){
      printf("  ");
    }else if(B[i]>9&&B[i]<99){
      printf("   ");
    }else if(B[i]>99){
      printf("    ");
    }
    
  }
  printf("\n");
  for (int i=0;i<TAM;++i){
    printf("%d ",B[i]);
  }
  printf("\n");
  
  return 0;
}
