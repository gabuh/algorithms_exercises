/*k) Elaborar um programa que leia uma matriz A do tipo vetor com dez elementos inteiros positivos. Construir uma matriz B de mesmo tipo e dimensao, em que cada elemento da matriz B deve ser o valor negativo do elemento correspondente da matriz A. Desta forma, se em A[1] estiver armazenado o elemento 8, deve estar em B[1] o valor -8 e assim por diante. Apresentar os elementos da matriz B.*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int main(){
 int A[TAM];
 int B[TAM];

 printf("A | B \n");
 for(int i=0; i<TAM; i++){
	A[i] = rand()%10;
	B[i] = (A[i]-(A[i]*2));
	printf("%d -> %d\n",A[i],B[i]);
 }
printf("\n");

return 0;
}

