/*
j) Elaborar um programa que leia duas matrizes A e B do tipo vetor com 15 elementos inteiros
cada. Construir duas outras matrizes C e D de mesmo tipo. Cada elemento da matriz C deve ser o somatorio do elemento correspondente da matriz A, e cada elemento da matriz D deve ser o fatorial do elemento correspondente da matriz B. Em seguida construir uma matriz E, que deve conter a diferen�a dos elementos das matrizes C e D com a soma dos elementos das matrizes A e B. Apresentar os elementos da matriz E em ordem crescente.
*/

#include<stdio.h>
#define TAM 15




int fatorial(int n){
  int f=1;
  for(int i=1;i<=n;i++){
    f=f*i;
  }
  return f;
}




int main(){
  int A[TAM];
  int B[TAM];
  int C[TAM];
  int D[TAM];
  int E[TAM];
  int temp;
  
  printf("Elmentos de A:"); //A
  for(int i=0;i<TAM;i++){
    scanf("%d",&A[i]);
      if(A[i]<0 || A[i]>12){
        while(A[i]<0 || A[i]>12){
          printf("must not be less than 0 or greater than 12 \n> ");
          scanf("%d",&A[i]);
        }
      }
    for(int ii=0;ii<=i;ii++){
      printf("%d ",A[ii]);
    }
  printf(">\n");
  }
  printf("Elmentos de B:"); //B
  for(int i=0;i<TAM;i++){
    scanf("%d",&B[i]);
      if(B[i]<0 || B[i]>12){
          printf("must not be less than 0 or greater than 12 \n> ");
        while(B[i]<0 || B[i]>12){
          scanf("%d",&B[i]);
        }
      }
    for(int ii=0;ii<=i;ii++){
      printf("%d ",B[ii]);
    }
  printf(">\n");
  }
  
  printf("\nMaking C\n");
      C[0]=0;
  for(int i=0;i<TAM;i++){//C ---------------------------------------
      for(int ii=0;ii<=i;ii++){
        // for (int iii=0;iii<=ii;iii++){
          C[i]=C[i]+A[ii];
        }
        printf("%d ",C[i]);
      }
  printf("> \n");
  
  printf("\nMaking D\n");
  for(int i=0;i<TAM;i++){ //D
    D[i]=fatorial(B[i]);
  printf("%d Factorial --> %d \n",B[i],D[i]);
  }
  
  printf("\nMaking E\n");
  //(c-d)+(a+b) e = sum
  
  for(int i=0;i<TAM;i++){ //E
    E[i]=(C[i]-D[i])+(A[i]+B[i]);
    printf("%d - %d + (%d + %d) = %d\n",C[i],D[i],A[i],B[i],E[i]);
  }

  
  printf("\nSorting E\n");
for(int i=0;i<TAM;i++){
  temp=E[i];
 for(int ii=0;ii<TAM;ii++){
   if(E[ii]<E[i]){
     E[i]=E[ii];
     E[ii]=temp;
     temp=E[ii];
   }
 }
}
  printf("\nPrinting E\n");
  printf("\n");
for(int i=0;i<TAM;i++){
  printf("%d ",E[i]);
}
  printf("\n");
  return 0;
}