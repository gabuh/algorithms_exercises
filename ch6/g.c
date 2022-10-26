/*g) Elaborar um programa que leia duas matrizes do tipo vetor para o armazenamento de nomes de pessoas, sendo a matriz A com 20 elementos e a matriz B com 30 elementos. Construir uma matriz C, sendo esta a junçao das matrizes A e B. Desta forma, a matriz C deve ter a capacidade de armazenar 50 elementos. Apresentar os elementos da matriz C.*/

#include<stdio.h>
#include<string.h>
#define TAM 50
#define TAMA (40*TAM)/100
#define TAMB (60*TAM)/100

struct String{
  char string[100];
};

int main(){
  struct String A[TAMA];
  struct String B[TAMB];
  struct String C[TAM];
  
  for(int i=0; i<TAM; i++){
	  i<TAMA?(strcpy(A[i].string,"String A")):(strcpy(B[i-TAMA].string,"String B"));
  }


for(int i=0; i<TAM; i++){
  i<TAMA?(strcpy(C[i].string,A[i].string)):(strcpy(C[i].string,B[i-TAMA].string));

  printf("%s %d \n",C[i].string,i);
}

printf("\n");

return 0;
}
