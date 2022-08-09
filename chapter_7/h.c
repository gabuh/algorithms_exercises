/*
h) Escrever um programa que leia 20 elementos numericos inteiros negativos em uma matriz A do tipo vetor. Construir uma matriz B de mesmo tipo e dimensao, em que cada elemento deve ser valor positivo do elemento correspondente da matriz A. Desta forma, se em A[1] estiver armazenado o elemento -3, deve estar em B[1] o valor 3 e assim por diante. Apresentar os elementos da matriz B em ordem decrescente.
*/
#include <stdio.h>
#define TAM 20

int main(){//
  int A[TAM];
  int B[TAM];
  int temp;

printf("Type negative numbers:\n");
for (int i=0;i<TAM;i++){   // Reading vector B
  A[i]=1;
  while(A[i]>0){
  scanf("%d",&A[i]);
  }
  printf("\n");
  for(int ii=0;ii<=i;ii++){
    printf("%d ",A[ii]);
  }
  printf(">");
}


for (int i=0;i<TAM;i++){ //Creating vector B
  B[i]= A[i]-(A[i]+A[i]);
}


for(int i=0;i<TAM;i++){ //Sorting vector B
  temp=B[i];
  for(int ii=0; ii<TAM;ii++){
    if(B[i]<B[ii]){
      B[i]=B[ii];
      B[ii]=temp;
      temp=B[i];
    }
  }
}
  

printf("\n\n");
for (int i=0;i<TAM;i++){ // Printing vector B
  printf("%d ",B[i]);
} 
printf("\n");

  
  return 0;
} //