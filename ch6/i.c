/*i) Escrever um programa que leia três matrizes (A, B e C) de uma dimensao do tipo vetor com cinco elementos cada que sejam do tipo real. Construir uma matriz D, sendo esta o resultado da junçao das três matrizes (A, B e C). Desta forma, a matriz D deve ter o triplo de elementos das matrizes A, B e C, ou seja, 15 elementos. Apresentar os elementos da matriz D.*/

#include<stdio.h>
#include<stdlib.h>

#define TAM 5

int main(){
int A[TAM],B[TAM],C[TAM],D[TAM*3];

for(int i=0; i<TAM; i++){
	A[i] = rand()%10;
	B[i] = rand()%10;
	C[i] = rand()%10;
	printf("A[%d]:%d B[%d]:%d C[%d]:%d\n",i, A[i],i,B[i],i,C[i]);
}

int i, A_range, B_range, C_range;
i = A_range = B_range = C_range = 0;
while(i<TAM*3){
    if(i < TAM && A_range < TAM){
	D[i] = A[A_range];
	A_range++;
    }else if(i < TAM*2 && B_range < TAM ){
	D[i] = B[B_range];
    	B_range++;
    }else if(i < TAM*3 && C_range < TAM){
    	D[i] = C[C_range];
	C_range++;
    }

i++;
}

printf("\n");

for(int i=0; i<(TAM*3); i++){
	printf("%d ",D[i]);
}
printf("\n");

 return 0;
}
