/*
t) Elaborar um programa que leia duas matrizes A e B de duas dimensoes com quatro linhas e cinco colunas.
A matriz A deve ser formada por valores divisiveis por 3 e 4, enquanto a matriz B deve ser formada por valores divisiveis
por 5 ou 6. As entradas dos valores nas matrizes devem ser validadas pelo programa e nao pelo usuario. 
Construir e apresentar a matriz C de mesma dimensao e numero de elementos que contenha a subtra�ao dos 
elementos da matriz A em rela�ao aos elementos da matriz B.
*/

#define lin 4
#define col 5

#include<stdio.h>
#include<stdlib.h>

int main(){

    int A[lin][col];
    int B[lin][col];
    int C[lin][col];

    for(int i=0; i<lin; i++){
        for(int j=0;j<col;j++){
            do{
                A[i][j] = rand()%10;
            }while(A[i][j]%3 != 0);
        }
        for(int j=0;j<col;j++){
            do{
                B[i][j] = rand()%10; 
            }while(B[i][j]%5 != 0);
        }
    }

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }

     for(int i=1;i<=3; i++){
        for(int j=1; j<=col; j++){
            if(i==1){
                if(j!=col){
                    printf("  ");
                }else{
                    printf("A ");
                }
            }
        }
        for(int j=1; j<=col; j++){
            if(i==2){
                if(j!=col){
                    printf("  ");
                }else{
                    printf("B ");
                }
            }
        }
        for(int j=1; j<=col; j++){ 
            if(i==3){
                if(j!=col){
                    printf("  ");
                }else{
                    printf("C ");
                }
            }
        }
        printf("\t");
    }

    printf("\n");

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            printf("%d ",A[i][j]);
        } 
        if((int)lin/2==i){
            printf("   -  ");
        }else{
            printf("\t");
        }
        for(int j=0; j<col; j++){
            printf("%d ",B[i][j]);
        }
        if((int)lin/2 == i){
            printf("   =  ");
        }else{
            printf("\t");
        }
        for(int j=0; j<col; j++){
            printf("%d ",C[i][j]);
        } 
        printf("\n");  
    }


    return 0;
}