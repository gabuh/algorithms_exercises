/*r) Elaborar um programa que leia seis elementos (valores inteiros) para as matrizes A e B de uma dimensao do tipo vetor. Construir as matrizes C e D de mesmo tipo e dimensao. A matriz C deve ser formada pelos elementos de indice impar das matrizes A e B e a matriz D deve ser formada pelos elementos de indice par das matrizes A e B. Apresentar os elementos das matrizes C e D.*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 6

int main(){
 int A[TAM]; 
 int B[TAM];
 int C[TAM];
 int D[TAM];
int flagImp = 0;
int flagPar = 0;


 for (int  i=0; i<TAM; i++){
	A[i] = rand()%10;
	B[i] = rand()%10;
	if(i%2!=0){
	  C[flagImp] = A[i];
	  C[TAM-flagImp-1] = B[i];
	  flagImp++;
	  printf("index->%d | A%d --> C%d && B%d --> D%d\n",i,A[i],C[flagImp-1],B[i],C[TAM-(flagImp-1)-1]);
	}else{
	  D[flagPar] = A[i];
	  D[TAM-flagPar-1] = B[i];
	  flagPar++;
	  printf("index->%d | A%d --> D%d && D%d --> D%d\n",i,A[i],D[flagPar-1],B[i],D[TAM-(flagPar-1)-1]);
	}
 }

printf("A: ");
for(int i=0; i<TAM; i++){
 printf("%d ",A[i]);
}

printf("\nB: ");
for(int i=0; i<TAM; i++){
 printf("%d ",B[i]);
}

printf("\nC: ");
for(int i=0; i<TAM; i++){
 printf("%d ",C[i]);
}

printf("\nD: ");
for(int i=0;i<TAM;i++){
printf("%d ",D[i]);
}
printf("\n");

  return 0;
}
