/*
c) Construir um programa que leia 15 elementos numericos inteiros em uma matriz A de uma dimensao do tipo vetor. Construir uma matriz B de mesmo tipo e dimensao, em que cada elemento seja o fatorial do elemento correspondente armazenado na matriz A. Apresentar os elementos da matriz B ordenados de forma crescente.
*/

#include<stdio.h>
#define TAM 15

int fatorial(int n){
  int f,i;
  f=1;
  for(i=1; i <=n ; i++){
    f=f*i;
  }
return f;
}


int main(){
int A[TAM];  
int B[TAM];  
int temp;

for (int i=0;i<TAM;++i){
  scanf("%d",&A[i]);
  for (int ii=0;ii<=i;ii++){
    printf("%d ",A[ii]);
  }
printf(">");
}  
//farotial + matriz b 
for (int i=0; i<TAM;++i){
  B[i]=fatorial(A[i]);
}
printf("\n...fatorando...\n");

for (int i=0; i<TAM;++i){
  temp=B[i];
  for (int ii=0; ii<TAM;++ii){
    if (B[ii]>B[i]){
      B[i]=B[ii];
      B[ii]=temp;
      temp=B[i];
    }
  }
}

printf("\n Vetor 'B' ordenado de forma crescente: ");
for(int i=0; i<TAM;i++){
  printf("%d ",B[i]);
}
  
  return 0;
}