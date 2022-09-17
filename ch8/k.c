/*k) Elaborar um programa que leia uma matriz A do tipo real de duas dimensoes com cinco linhas e cinco colunas. Apresentar o somatorio dos elementos situados na diagonal principal (posiçoes A[1,1], A[2,2], A[3,3], A[4,4]) da referida matriz.
*/

#include<stdio.h>
#include<stdlib.h>

#define lin 5
#define col lin


int main(){
int A[lin][col];
int sum=0;
int count=0;

int collect[col];


for(int i=0;i<lin;i++){
	for(int j=0;j<col;j++){
		A[i][j]=rand()%10;
	}
}



for(int i=0;i<lin;i++){
	for(int j=0;j<col;j++){
		if(i==j){
			sum=sum+A[i][j];
			collect[count]=A[i][j];
			count++;
		}
	}
}


for(int i=0;i<lin;i++){
	for(int j=0;j<col;j++){
		if(i==j){
			printf("|%d| ",A[i][j]);
		}else{
			printf("%d ",A[i][j]);
		}
	}
printf("\n");
}
printf("\n");


for(int i=0;i<col;i++){
	printf("%d + ",collect[i]);
}
printf("= %d\n",sum);


return 0;

} //
