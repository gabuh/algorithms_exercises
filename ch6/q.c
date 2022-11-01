/*q) Elaborar um programa que leia 15 elementos reais para uma matriz A de uma dimensao do tipo vetor. Construir uma matriz B de mesmo tipo e dimensao, observando a seguinte lei de formaçao: "todo elemento da matriz A que possuir indice par deve ter seu elemento dividido por 2; caso contrario, o elemento da matriz A deve ser multiplicado por 1.5". Apresentar os elementos da matriz B.*/

#include<stdio.h>
#include<stdlib.h>

#define TAM 15

int main(){
  float A[TAM];
  float B[TAM];

  for(int i=0 ;i<TAM; i++){
	A[i] = rand()%10;
	if(i%2==0){
		B[i] = A[i] / 2;
		printf("Index -> %d | %f /2 = %f\n",i,A[i],B[i]);
	}else{
		B[i] = A[i] * 1.5;
		printf("Index -> %d | %f * 1.5 = %f\n",i,A[i], B[i]);
	}
  }


return 0;
}
