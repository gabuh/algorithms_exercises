/*
1. Elaborar um programa que efetue o gerenciamento dos dados de dez registros de uma agenda que contenha nomes, endere�os e telefones, defina a estrutura de registro apropriada, o diagrama de blocos e a codifica�ao de um programa que, por meio de um menu de op�oes, execute as seguintes etapas:


a) Cadastrar os dez registros.
b) Pesquisar um registro de cada vez pelo campo nome (usar o metodo sequencial).
c) Classificar por ordem de nome os registros cadastrados.
d) Apresentar todos os registros.
e) Sair do programa de cadastro.
*/
#include<stdio.h>
#include<stdlib.h>

#define TAM 2

struct Agenda{
  char nome[100];
  char endereco[100];
  int telefones;
};
struct  cadastrarRegistro(int quantidade){
  struct Agenda ag[quantidade];
  for(int i=0; i<quantidade; i++){
    fgets(ag[i].nome,100,stdlib);
    fgets(ag[i].endereco,100,stdlib);
    scanf("%d",&ag[i].telefones);
  }
  return ag;
}
// void imprimirRegistros(struct Agenda ag[],int quantidade){
//   struct Agenda ag[quantidade];
//   for(int i=0; i<quantidade; i++){
//     printf("Nome:%s , Endereco:%s , Telefone:%i ", ag[i].nome,ag[i].endereco, ag[i].telefones);
//   }
// }


int main(){
    struct Agenda agenda[] = cadastrarRegistro(TAM);
// imprimirRegistros(agenda, TAM);

return 0;
}
