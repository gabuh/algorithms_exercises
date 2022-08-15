/*
a) Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensoes com cinco linhas e tres colunas para valores inteiros. Construir uma matriz C de mesma dimensao, que seja formada pela soma dos elementos da matriz A com os elementos da matriz B. Apresentar os elementos da matriz C.
*/

#include <stdio.h>
#define li 5
#define col 3

int main(){
int A[li][col];
int B[li][col];
int C[li][col];
int i,ii;

for(int c=0;c<col;c++){
  printf("> line %d of vector A>\n",c+1);
  for(int l=0;l<li;l++){
    scanf("%d",&A[l][c]);
    for(int i=0;i<=l;i++){
      printf("%d ",A[i][c]);
    }
    printf("\n");
  }
}
for(int c=0;c<col;c++){
  printf("> line %d of vector B>\n",c+1);
  for(int l=0;l<li;l++){
    scanf("%d",&B[l][c]);
    for(int i=0;i<=l;i++){
      printf("%d ",B[i][c]);
    }
    printf("\n");
  }
}

for(int c=0;c<col;c++){
  for(int l=0;l<li;l++){
    C[l][c]=A[l][c]+B[l][c];
  }
  printf("\n");
}
  printf("\n\n");

printf("C\n");
for(int c=0;c<col;c++){
  for(int l=0;l<li;l++){
    printf("%d ",C[l][c]);
  }
  printf("\n");
}

  
  return 0;
}