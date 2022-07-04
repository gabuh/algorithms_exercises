/*a) Elaborar um programa que leia 12 elementos numericos inteiros em uma matriz do tipo vetor. Coloque-os em ordem decrescente e apresente os elementos ordenados.
*/


#include<stdio.h>
#define TAM 12

int main(){
 int vetor[TAM]={0}; //vetor inteiro
 int temp;   //variavel temporaria.

for (int i=0; i<TAM;++i){
  scanf("%d",&vetor[i]);
  for (int ii=0;ii<i;++ii){
    printf("%d ",vetor[ii]);
  }
  printf(">");
}
//Ordenando de forma decrescente.
for (int i=0; i<TAM;++i){
    for (int ii=0;ii<TAM;++ii){
      temp=vetor[i];
      if(vetor[ii]<vetor[i]){
        vetor[i]=vetor[ii];
        vetor[ii]=temp;
      }
    }
}

//apresentando os elemetos.
  printf("\nResultado:\n");
for(int i=0; i<TAM;++i){
  printf("%d ",vetor[i]);
}

  return 0;
  
}