/*k) Elaborar um programa que leia duas matrizes A e B de uma dimensao do tipo vetor com dez elementos inteiros cada. Construir uma matriz C de mesmo tipo e dimensao que seja formada pela soma dos quadrados de cada elemento correspondente das matrizes A e B. Apresentar a matriz C em ordem decrescente.
*/
#include <stdio.h>
#define TAM 10
int power(int number,int po){
  int p=number;
  for(int i=1;i<po;i++){
    p=p*number;
  }
  return p;
}

int main(){
  int A[TAM];
  int B[TAM];
  int C[TAM];
  int temp;
  
  
    printf("\nVector A:\n");
  for(int i=0; i<TAM;i++){
    scanf("%d",&A[i]);
    A[i]=power(A[i],2);
    for(int ii=0;ii<=i;ii++){
      printf("%d ",A[ii]);
    }
  printf(">\n");
  }
  
    printf("Vector B:\n");
  for(int i=0;i<TAM;i++){
    scanf("%d",&B[i]);
    B[i]=power(B[i],2);
    for(int ii=0;ii<=i;ii++){
      printf("%d ",B[ii]);
    }
    C[i]=A[i]+B[i];
  printf(">\n");
  }
  
  
  for(int i=0;i<TAM;i++){
    temp=C[i];
    for(int ii=0;ii<TAM;ii++){
     if(C[ii]<C[i]){
       C[i]=C[ii];
       C[ii]=temp;
       temp=C[i];
     } 
    }
  }
  
  printf("C ---v\n");
  for(int i=0;i<TAM;i++){
    printf ("%d ",C[i]);
  }
  printf("\n");
  
  return 0;
}