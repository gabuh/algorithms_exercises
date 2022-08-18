/*
l) Construir um programa que leia tr�s matrizes A, B e C de uma dimensao do tipo vetor com 15 elementos reais cada. Construir uma matriz D de mesmo tipo e dimensao que seja formada pelo cubo da soma dos elementos correspondentes �s matrizes A, B e C. Apresentar a matriz D em ordem crescente.
*/
#include<stdio.h>
#define TAM 15
int power(int n,int po){
  int p=n;
  for(int i=1;i<po;i++){ p=p*n; }
  return p;
}

int main(){
int A[TAM];
int B[TAM];
int C[TAM];
int D[TAM];
int temp;

printf("Vector A:\n");  
for(int i=0;i<TAM;i++){
  scanf("%d",&A[i]);
  for(int ii=0;ii<i;ii++){
    printf("%d ",A[ii]);
  }
  printf(">\n");
}
printf("Vector B:\n");  
for(int i=0;i<TAM;i++){
  scanf("%d",&B[i]);
  for(int ii=0;ii<i;ii++){
    printf("%d ",B[ii]);
  }
  printf(">\n");
}
printf("Vector C:\n");  
for(int i=0;i<TAM;i++){
  scanf("%d",&C[i]);
  for(int ii=0;ii<i;ii++){
    printf("%d ",C[ii]);
  }
  printf(">\n");
}

printf("Creating D:\n");
for(int i=0;i<TAM;i++){
  D[i]=power(A[i]+B[i]+C[i],3);
  printf("(%d + %d + %d)^ = %d\n",A[i],B[i],C[i],D[i]);
}


printf("Sorting D:\n");
for(int i=0;i<TAM;i++){
  temp=D[i];
  for(int ii=0;ii<TAM;ii++){
    if(D[i]<D[ii]){D[i]=D[ii];D[ii]=temp;temp=D[i];}
  }
  printf("||||");
}

printf("\n");
for(int i=0;i<TAM;i++){
  printf("%d ",D[i]);
}
  
  return 0;
}