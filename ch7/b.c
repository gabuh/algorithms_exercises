/*
b) Elaborar um programa que leia oito elementos numericos inteiros em uma matriz A de uma dimensao do tipo vetor. Construir uma matriz B de mesma dimensao e tipo com os elementos da matriz A multiplicados por 5. Montar uma rotina de pesquisa binaria, para pesquisar os elementos armazenados na matriz B.
*/
#include<stdio.h>

#define TAM 12

int busca(int valor,int indexTotal,int vetor[]){
  int control=0;
  int valorDaBusca,index,temp;
  //ordenando
  
  for (int i=0;i<TAM;++i){
    temp=vetor[i];
    for (int ii=0;ii<TAM;ii++){
      if(vetor[ii]>vetor[i]){
        vetor[i]=vetor[ii];
        vetor[ii]=temp;
        temp=vetor[i];
      }
    }
  }
  
  printf("\n");
  for (int i=0; i<TAM; i++){
    printf("%d ",vetor[i]);
  }
  
  //busca  1 2 3 4 5 6 7  8 9 10 11   
  while(control <= indexTotal){  //11 
    index = (control + indexTotal)/2 ; // 0 + 10 / 2 == 5
    if(vetor[index] == valor){
      return vetor[index];
    }
    if(vetor[index] < valor){
      control = index + 1;
    
    }else {
      indexTotal = index -1;
    }
  }
  //if it won't be found
  return -1;
}


int main(){
  int A[TAM];
  int B[TAM];
  int valor;
  
  //leitura de A
  printf("\nLeitura de A:\n");
  for (int i=0;i<TAM;i++){
    scanf("%d",&A[i]);
    for (int ii=0; ii<=i;++ii){
      printf("%d ",A[ii]);
    }
  printf(">");
  }
  //valores de B
  for(int i=0;i<TAM;++i){
    B[i]=A[i]*5;
  }

  //procurar elemento
  printf("\nB = A*5\nEcontre um elemento na matriz B:");
  scanf("%d",&valor);
  if(TAM%2==0){
    valor = busca(valor,TAM,B);
    if(valor!=-1){
      printf("\nValor econtrado: %d\n ",valor);
    }else printf("\nNao encontrado");
}else{
  valor = busca(valor,TAM-1,B);
  if(valor!=-1){
    printf("\nValor econtrado: %d\n ",valor);
  }else{
    printf("Nao encontrado");
  }
} 
  
  
  
  return 0;
}