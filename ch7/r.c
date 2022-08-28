/*
r) Elaborar um programa que efetue a leitura de dados em duas matrizes (A e B) de uma dimensao do tipo vetor, sendo a matriz A com dez elementos e a matriz B com cinco elementos. Os elementos a serem armazenados nas matrizes devem ser do tipo cadeia. Construir uma matriz C com a capacidade de armazenar um total de 15 elementos e executar a jun�ao das matrizes A e B na matriz C. Apresentar os dados da matriz C em ordem alfabetica descendente.
*/
#include<stdio.h>
#include<string.h>
#define TAM 10

int searchSize(char compChar){
  char abc[]={"'` ,[]{}.?~!@#$%^*=+-AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"};
  for (int i=0;i<74;i++){
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
  char temp[100];
  struct String A[TAM];
  struct String B[TAM-5];
  struct String C[TAM+5];

printf("Complete A writing something:\n");
  for(int i=0;i<TAM;i++){
    printf("%d : ",i+1);
    fgets(temp,100,stdin);
    strcpy(A[i].value,temp);
  }
printf("Complete B writing something:\n");
  for(int i=0;i<TAM-5;i++){
    printf("%d : ",i+1);
    fgets(temp,100,stdin);
    strcpy(B[i].value,temp);
  }
  
for(int i=0;i<(2*TAM)-5;i++){
  if(i<TAM-5){
    strcpy(C[i].value,B[i].value);
  }else if(i<TAM+5){
    strcpy(C[i].value,A[i-(TAM-5)].value);
  }
}

for(int i=0;i<((TAM*2)-5)-1;++i){
  for(int j=0;j<((TAM*2)-5)-1-i;++j){
        if(searchSize(C[j].value[0])<searchSize(C[j+1].value[0])){
          strcpy(temp,C[j].value);
          strcpy(C[j].value,C[j+1].value);
          strcpy(C[j+1].value,temp);
        }
  }
}

printf("Here is descending C:\n");
for(int i=0;i<(TAM*2)-5;++i){
  printf("%d : ",i+1);
  printf("%s",C[i].value);
}
  return 0;
}