/*
1. Elaborar um programa que efetue o gerenciamento dos dados de dez registros de uma agenda que contenha nomes, endere�os e telefone, defina a estrutura de registro apropriada, o diagrama de blocos e a codifica�ao de um programa que, por meio de um menu de op�oes, execute as seguintes etapas:


a) Cadastrar os dez registros. [x]
b) Pesquisar um registro de cada vez pelo campo nome (usar o metodo sequencial). [x]
c) Classificar por ordem de nome os registros cadastrados. [ ] process
d) Apresentar todos os registros. [x]
e) Sair do programa de cadastro.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 2

struct Agenda{
  char nome[100];
  char endereco[100];
  int telefone;
};

struct Agenda pesquisarRegistro(struct Agenda ag[], int quantidade, char nome[]){
  struct Agenda none;
  for(int i=0; i<quantidade; i++){
    printf("%d \n",i);
    if(!strcmp(nome,ag[i].nome)){
      return ag[i];
    }
  }
  printf("Not found\n");
  return none;
}

void cadastrarRegistro(struct Agenda ag[] ,int quantidade){
  for(int i=0; i<quantidade; i++){
    // fgets(ag[i].nome,100,stdin);
    // fgets(ag[i].endereco,100,stdin);
    printf("Registro: %d \nDigite o nome: ",i);  
      scanf("%s",ag[i].nome);
    printf("Digite o endereco: ");  
    scanf("%s",ag[i].endereco);
    printf("Digite o telefone: ");  
    scanf("%d",&ag[i].telefone);
  }
}

void imprimirRegistro(struct Agenda ag){
  printf("Nome:%s , Endereco:%s , Telefone:%d \n", ag.nome,ag.endereco, ag.telefone);
}

// void imprimirRegistrosPorNomes(struct Agenda ag[], int quantidade){
//   imprimirRegistro();
// }

void imprimirRegistros(struct Agenda ag[] ,int quantidade){
  for(int i=0; i<quantidade; i++){
    imprimirRegistro(ag[i]);
  }
}


int main(){
    struct Agenda agenda[TAM]; 
    cadastrarRegistro(agenda,TAM);
    imprimirRegistros(agenda, TAM);
    imprimirRegistro(pesquisarRegistro(agenda, TAM, "gabu"));

return 0;
}
