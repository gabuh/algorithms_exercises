/*r) Elaborar um programa que leia quatro matrizes A, B, C e D de uma dimensao com quatro elementos. 
Construir uma matriz E de duas dimensoes do tipo 4 x 4, sendo a primeira linha formada pelo dobro dos 
valores dos elementos da matriz A, a segunda linha formada pelo triplo dos valores dos elementos da matriz
 B, a terceira linha formada pelo quadruplo dos valores dos elementos da matriz C e a quarta linha formada 
 pelo fatorial dos valores dos elementos da matriz D. Apresentar a matriz E.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 4 

int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f = f*i;
    }
    return f;
}

int main(){
    int A[TAM];
    int B[TAM];
    int C[TAM];
    int D[TAM];
    int E[TAM][TAM];

    for(int i=0;i<TAM;i++){
        if(i==0){
            printf("\nA: ");
        }else if(i==1){
            printf("\nB: ");
        }else if(i==2){
            printf("\nC: ");
        }else if(i==3){
            printf("\nD: ");
        }
        for(int j=0;j<TAM;j++){
                if(i==0){
                A[j] = rand()%10;
                printf("%d ",A[j]);
            }else if(i==1){
                B[j] = rand()%10;
                printf("%d ",B[j]);
            }else if(i==2){
                C[j] = rand()%10;
                printf("%d ",C[j]);
            }else if(i==3){
                D[j] = rand()%10;
                printf("%d ",D[j]);
            }
        }
    }

printf("\n\nE:\n");

for(int i=0;i<TAM;i++){
    for(int j=0;j<TAM;j++){
        if(i==0){
            E[i][j] = A[j]*2;
        }else if(i==1){
            E[i][j] = B[j]*3;
        }else if(i==2){
            E[i][j] = C[j]*4;
        }else if(i==3){
            E[i][j] = factorial(D[j]);
        }
    }
}

for(int i=0; i<TAM; i++){
    for(int j=0; j<TAM; j++){
        printf("%d ",E[i][j]);
    }
    printf("\n");
}


    return 0;
}