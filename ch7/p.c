/*
p) Elaborar um programa que leia uma matriz A com dez elementos do tipo cadeia. Construir uma matriz B de mesma dimensao e tipo que a matriz A. O ultimo elemento da matriz A deve ser o primeiro da matriz B, o penultimo elemento da matriz A deve ser o segundo da matriz B ate que o primeiro elemento da matriz A seja o ultimo da matriz B. Apresentar os elementos da matriz B de forma ordenada ascendente.
*/
#include <stdio.h>
#include <string.h>

int searchIndex(char compChar){
  char abc[]={"'` ,[]{}.?~!@#$%^*=+-AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"};
  for (int i=0;i<74;i++){
      if(abc[i]==compChar){
        return i;
      }
  }
return 0;
}


int main(){
  char A[100];
  char B[100];
  int len;
  char temp;
  
  printf("Type something bellow:\n");
  scanf("%s",A);
  len=strlen(A);

printf("\nB:\n");
for(int i=0;i<len;i++){
  B[i]=A[(len-1)-i];
}
for(int i=0;i<len;i++){
  printf("%c",B[i]);
}
  printf("\n");
  for(int i=0;i<len-1;i++){
    for(int j=0;j<(len-1)-i;j++){
     if(searchIndex(B[j])<searchIndex(B[j+1])){
        temp=B[j];
        B[j]=B[j+1];
       B[j+1]=temp;
       temp=B[i];
     }
    }
  }
  printf("\nB Ascending:\n");
  for(int i=0;i<len;i++){
    printf("%c",B[i]);
  }
  printf("\n");
  return 0;
}