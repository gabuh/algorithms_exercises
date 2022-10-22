/*
v) Elaborar um programa que fa�a a leitura de duas matrizes A e B de duas dimensoes com cinco linhas e cinco colunas. A matriz A deve ser formada por valores que nao sejam divisiveis por 3, enquanto a matriz B deve ser formada por valores que nao sejam divisiveis por 6. As entradas dos valores nas matrizes devem ser validadas pelo programa e nao pelo usuario. Construir e apresentar uma matriz C de mesma dimensao e numero de elementos que contenha a soma dos elementos das matrizes A e B.
*/
#include <stdio.h>
#include <stdlib.h>
#define lin 4
#define col 4

int main(){
    int A[lin][col];
    int B[lin][col];
    int C[lin][col];

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
         do{
            A[i][j] = rand()%100;
         }while(A[i][j]%3 == 0);
         
         do{
            B[i][j] = rand()%100;
         }while(B[i][j]%6 == 0);

            C[i][j] = A[i][j] + B[i][j];
        }
        for(int j=0; j<col; j++){
            printf("%d ",A[i][j]);
        }
        i == (lin/2)-1?printf("  +  "):printf("     ");
        for(int j=0; j<col; j++){
            printf("%d ",B[i][j]);
        }
        i == (lin/2)-1?printf("  =  "):printf("     ");
        for(int j=0; j<col; j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }




    return 0;
}