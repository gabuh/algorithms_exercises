/*
r) Elaborar um programa que efetue a leitura de dados em duas matrizes (A e B) de uma dimensao do tipo vetor, sendo a matriz A com dez elementos e a matriz B com cinco elementos. Os elementos a serem armazenados nas matrizes devem ser do tipo cadeia. Construir uma matriz C com a capacidade de armazenar um total de 15 elementos e executar a jun�ao das matrizes A e B na matriz C. Apresentar os dados da matriz C em ordem alfabetica descendente.
*/
#include<stdio.h>
#include<string.h>
#define TAM 6

int searchIndex(char compChar){
  char abc[]={"abcdefghijklmnopqrstuvwxyz"};
  for (int i=0;i<26;i++){
      if(abc[i]==compChar){
        return i;
      }
  }
return 0;
}

struct String{
  char value[100];
};

int main(){
  char value[100];
  struct String A[TAM];
  struct String B[TAM-5];
  struct String C[TAM+5];
  

  
  
printf("Complete A:\n");
  for(int i=0;i<TAM;i++){
    fgets(value,100,stdin);
    strcpy(A[i].value,value);
  }
printf("Complete B:\n");
  for(int i=0;i<TAM-5;i++){
    fgets(value,100,stdin);
    strcpy(B[i].value,value);
  }
  
for(int i=0;i<(2*TAM)-5;i++){
    printf("%d",i);
  if(i<TAM-5){
    // printf("%s",B[i].value);
    strcpy(C[i].value,B[i].value);
  }else if(i<TAM+5){
    // printf("%s",A[i-(TAM-5)].value);
    strcpy(C[i].value,A[i-(TAM-5)].value);
  }
}




// printf("Here is C:\n");
// for(int i=0;i<TAM+5;i++){
//   printf("%s",C[i].value);
// }

printf("\ndone\n");





  return 0;
}