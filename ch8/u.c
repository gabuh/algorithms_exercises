/*
u) Elaborar um programa que leia duas matrizes A e B de duas dimensoes com quatro linhas e cinco colunas. A matriz A deve ser formada por valores divisiveis por 3 ou 4, enquanto a matriz B deve ser formada por valores divisiveis por 5 e 6. As entradas dos valores nas matrizes devem ser validadas pelo programa e nao pelo usuario. Construir e apresentar a matriz C de mesma dimensao e numero de elementos que contenha o valor da multiplica�ao dos elementos da matriz A com os elementos correspondentes da matriz B.
*/
#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 5

int main(){
    int A[lin][col];
    int B[lin][col];
    int C[lin][col];

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            do{
                A[i][j] = rand()%100;
            }while(A[i][j]%4 != 0 && A[i][j]%3 != 0);
            do{
                B[i][j] = rand()%100;
            }while(B[i][j]%5 !=0 && B[i][j]%6 !=0 );

            C[i][j] = A[i][j] * B[i][j];
            
        }
    }

    for(int i=0; i<lin;i++){
        for(int j=0;j<col;j++){
            printf("%d ",A[i][j]);
        }
            i==(int)lin/2?printf("  *  "):printf("     ");
        for(int j=0;j<col;j++){
            printf("%d ",B[i][j]);
        }
            i==(int)lin/2?printf("  =  "):printf("     ");
        for(int j=0;j<col;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");

    }

    return 0;
}