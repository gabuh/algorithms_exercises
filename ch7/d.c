/*
d) Elaborar um programa que leia uma matriz A com 12 elementos do tipo real. Apos a leitura da matriz A, colocar os seus elementos em ordem crescente. Depois, fazer a leitura de uma matriz B tambem com 12 elementos do tipo real e colocar os elementos em ordem crescente. Construir uma matriz C, em que cada elemento seja a soma do elemento correspondente das matrizes A e B. Colocar em ordem decrescente os elementos da matriz C e apresentar os seus valores.
*/
#include<stdio.h>
#define TAM 12

int main(){
 int A[TAM];
 int B[TAM];
 int C[TAM];
 int temp;
 
 //leitura de A
 printf("\nLeitura de A:\n");
 for(int i=0; i<TAM;++i){
   scanf("%d",&A[i]);
   for(int ii=0;ii<=i;++ii){
     printf("%d ",A[ii]);
   }
 }
 printf(">\n");
  for (int i=0; i<TAM;i++){
   temp=A[i];
   for(int ii=0;ii<TAM;ii++){ //odernando de forma crescente
    if(A[ii]>A[i]){
      A[i]=A[ii];
      A[ii]=temp;
      temp=A[i];
    }
   }
 }

 
 //leitura de B
 printf("\nLeitura de B:\n");
for(int i=0; i<TAM;++i){
   scanf("%d",&B[i]);
   for(int ii=0;ii<=i;++ii){
     printf("%d ",B[ii]);
   }
 }
 printf(">\n");
 
  for (int i=0; i<TAM;i++){
   temp=B[i];
   for(int ii=0;ii<TAM;ii++){ //odernando de forma crescente
    if(B[ii]>B[i]){
      B[i]=B[ii];
      B[ii]=temp;
      temp=B[i];
    }
   }
 }
printf("Vetor A crescente:\n");
for (int i=0;i<TAM;++i){
  printf("%d ",A[i]);
}
printf(">\n");
printf("Vetor B crescente:\n"); 
for (int i=0;i<TAM;++i){
  printf("%d ",B[i]);
}
printf(">\n");

 


//resultado de C 
for(int i=0;i<TAM;++i){
  C[i]=A[i]+B[i];
} 
 for (int i=0; i<TAM;i++){
   temp=C[i];
   for(int ii=0;ii<TAM;ii++){ //odernando de forma decrescente
    if(C[ii]<C[i]){
      C[i]=C[ii];
      C[ii]=temp;
      temp=C[i];
    }
   }
 }
printf("Vetor C decrescente: \n");
for (int i=0;i<TAM;++i){
  printf("%d ",C[i]);
}
printf(">\n");
 
 
  return 0;
}