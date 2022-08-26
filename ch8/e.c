/*e) Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensao para 12
elementos reais. Construir uma matriz C de duas dimensoes, sendo a primeira coluna da matriz C formada pelos elementos da matriz A multiplicados por 2 e a segunda coluna formada pelos elementos da matriz B subtraidos de 5. Apresentar separadamente as matrizes.
*/

#include<stdio.h>
#define lin 12
#define col 2

int main(){
int A[lin];
int B[lin];
int C[lin][col];


printf("Column 1\n");
for(int i=0;i<lin;i++){
  scanf("%d",&A[i]);
}
printf("Column 2\n");
for(int i=0;i<lin;i++){
  scanf("%d",&B[i]);
}

for (int l=0;l<lin;l++){
  for (int c=0;c<col;c++){
   C[l][0]=A[l]*2; //column one
   C[l][1]=B[l]-5; //colum two
    
  }
}
for (int l=0;l<lin;l++){
  for (int c=0;c<col;c++){
   printf("%d",C[l][c]);
    
  }
  printf("\n");
  
}


  
  
  return 0;
}