/*
a) Elaborar um programa que efetue a leitura de dez nomes de pessoas em uma matriz A do tipo vetor e apresente-os em seguida.
*/
#include<stdio.h>
#include<stdlib.h>
struct Pessoa{
  char nome[100];
};

int main(){
struct Pessoa A[10];
for(int i=0;i<10;i++){
  fgets(A[i].nome,100,stdin);
}
for(int i=0;i<10;i++){
  printf("%d %s",i+1,A[i].nome);
}


return 0;
}