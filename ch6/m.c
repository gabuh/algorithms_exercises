/*m) Construir um programa que calcule a tabuada de um valor qualquer de 1 ate 10 e armazene os resultados em uma matriz A de uma dimensao. Apresentar os elementos da matriz A.
 */

#include<stdio.h>

int main(){
   int A[100];

	for(int i=1; i<=10; i++){
		for(int n=1; n<=10; n++){
			A[(100-(10*i)+(10-n))] = i*n;
			printf("%d x %d = %d\n",i,n,A[(100-(i*10)+10-n)]);
			
		}
		printf("\n");
	}
printf("A:\n");
for(int i=99; i>=0;i--){
	printf("%d ",A[i]);
}
printf("\n");

return 0;
}
