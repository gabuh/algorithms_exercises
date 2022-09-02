/*f) Elaborar um programa que leia uma matriz A de duas dimensoes com cinco linhas e quatro colunas. Construir uma matriz B de mesma dimensao, em que cada elemento seja o fatorial de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes A e B. 
*/
#include<stdio.h>
#define lin 5
#define col 4


int factorial(int n){
  int f=1;
  for(int i=1;i<=n;i++){
    f=f*i;
  }
  return f;
}



int main(){
  int A[lin][col];
  int B[lin][col];
  
  for(int i=0;i<lin;i++){
    printf("Complete the line %d\n",i+1);
    for(int j=0;j<col;j++){
    do{
    printf("Type any number beetween 1 and 12.\n");
    scanf("%d",&A[i][j]);
    }while(A[i][j]>12 || A[i][j]<1);
      
      for(int ii=0;ii<=j;ii++){
      printf("%d ",A[i][ii]);  
      }  
      printf(">\n");
    }
  }
  
printf("\n");

  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
      B[i][j]=factorial(A[i][j]);
    }
  }
  
  for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
    printf("%d ",A[i][j]);
    }
    printf("\t");
    for(int j=0;j<col;j++){
    printf("%d ",B[i][j]);
    }
    printf("\n");
  }
  
  // printf("%d \n",factorial(5));
  return 0;
}