/*c) Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que essa matriz tenha o tamanho de quatro linhas por cinco colunas, em seguida apresentar a matriz.
*/
#include<stdio.h>
#define lin 4
#define col 5
int main(){
int matrix[lin][col];
for(int i=0;i<lin;i++){ //leitura por linha
    printf("\nline %d\n",i+1);
  for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
    printf("\n");
  }
  
for(int i=0;i<lin;i++){
  for(int j=0;j<col;j++){
      printf("%d ",matrix[i][j]);
    }     
    printf("\n");
  }
  
  return 0;
}