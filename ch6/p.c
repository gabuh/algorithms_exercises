/*p) Elaborar um programa que leia 12 elementos inteiros para uma matriz A de uma dimensao do tipo vetor. Construir uma matriz B de mesmo tipo e dimensao, observando a seguinte lei de formaçao: "todo elemento da matriz A que for impar deve ser multiplicado por 2; caso contrario, o elemento da matriz A deve permanecer constante". Apresentar os elementos da matriz B.*/

#include<stdio.h>
#include<stdlib.h>

#define TAM 12 

int main (){
 int A[TAM];
 int B[TAM];

printf("A  |  B\n");
 for(int i=0; i<TAM; i++){
	A[i] = rand()%10;
  	if(A[i]%2!=0){
  	 B[i] = A[i]* 2;
	 printf("%d *2 = %d\n",A[i],B[i]);
	}else{
	 B[i] = A[i]; 
	 printf("%d ---> %d\n",A[i],B[i]);
	}
	
  }




return 0;
}
