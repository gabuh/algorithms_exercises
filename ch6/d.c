/*
d) Elaborar um programa que leia 15 elementos inteiros de uma matriz A do tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguinte lei de forma�ao: "todo elemento da matriz B deve ser o quadrado do elemento da matriz A correspondente". Apresentar os elementos das matrizes A e B.
*/
#include<stdlib.h>
#include<stdio.h>
#define SIZE 15

int power(int e,int b){
	int r=1;
	for(int i=0;i<b;i++){
		r=r*e;
	}

return r;
}

int main(){
	int A[SIZE];
	int B[SIZE];

printf("A:\n");
for(int i=0; i<SIZE; i++){
	A[i]=rand()%10;
	printf("%d ",A[i]);
}
printf("\n\nB:\n");


for(int i=0; i<SIZE; i++){
	B[i]=power(A[i],2);
	printf("%d ",B[i]);
}

printf("\n");
for(int i=0; i<SIZE; i++){
	printf("%d^2=%d\n",A[i],B[i]);
}


printf("\n");


return 0;
}

