/*
s) Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensoes com cinco linhas e seis colunas.
A matriz A deve aceitar a entrada de valores pares, enquanto a matriz B deve aceitar a entrada de valores impares.
As entradas dos valores nas matrizes A e B devem ser validadas pelo programa e nao pelo usuario. 
Construir a matriz C de mesma dimensao, que seja formada pela soma dos elementos da matriz A com os elementos da matriz B. 
Apresentar os elementos da matriz C.
*/
#include<stdio.h>
#include<stdlib.h>

#define lin 5
#define col 6

int main(){
    int A[lin][col];
    int B[lin][col];
    int C[lin][col];

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            do{
                A[i][j] = rand()%10;
            }while(A[i][j]%2!=0);
        }   
    }
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            do{
                B[i][j] = rand()%10;
            }while(B[i][j]%2==0);
        }   
    }

    for(int i=0;i<lin;i++){
        for(int j=0; j<col; j++){
            C[i][j] = A[i][j] + B[i][j];
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
            printf(" +  ");
        }else{
            printf("\t");
        }
        for(int j=0; j<col; j++){
            printf("%d ",B[i][j]);
        }
        if((int)lin/2 == i){
            printf(" =  ");
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