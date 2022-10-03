/*
p) Elaborar um programa que leia uma matriz A de duas dimensoes com dez linhas e sete colunas.
Ao final apresentar o total de elementos pares e impares existentes na matriz.
Apresentar tambem o percentual de elementos pares e impares em rela�ao ao total de elementos da matriz.
Supondo a exist�ncia de 20 elementos pares e 50 elementos impares, ter-se-ia 28,6% de elementos pares e 71,4% de elementos impares.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define lin 10
#define col 7


int main(){
    int A[lin][col];
    int odd,even;
    odd = even = 0;

    for(int i=0;i<lin;i++){
        for (int j=0;j<col;j++){
            A[i][j]=rand()%10;
        }
    }


    for(int i=0;i<lin;i++){
        for (int j=0;j<col;j++){
            if(A[i][j]%2==0){
                even++;
            }else{
                odd++;
            }

        }
    }


    for(int i=0;i<lin;i++){
        for (int j=0;j<col;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    
    printf("Odd Total: %d, %f%%\nEven Total: %d, %f%%\n",odd,(float)((double)100/(lin*col))*odd,even,(float)((double)100/(lin*col))*even);

    return 0;
}
