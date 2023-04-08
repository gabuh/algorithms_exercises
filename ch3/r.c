/*
r) Em uma elei�ao sindical concorreram ao cargo de presidente tr�s candidatos (representados pelas variaveis A, B e C). Durante a apura�ao dos votos foram computados votos nulos e em branco, alem dos votos validos para cada candidato. Deve ser criado um programa de computador que fa�a a leitura da quantidade de votos validos para cada candidato, alem ler tambem a quantidade de votos nulos e em branco. Ao final o programa deve apresentar o numero total de eleitores, considerando votos validos, nulos e em branco; o percentual correspondente de votos validos em rela�ao � quantidade de eleitores; o percentual correspondente de votos validos do candidato A em rela�ao � quantidade de eleitores; o percentual correspondente de votos valido do candidato B em rela�ao � quantidade de eleitores; o percentual correspondente de votos validos do candidato C em rela�ao quantidade de eleitores; o percentual correspondente de votos nulos em rela�ao � quantidade de eleitores; e por ultimo o percentual correspondente de votos em branco em rela�ao � quantidade de eleitores.
*/

#include<stdio.h>
#include<math.h>

struct Candidato
{   
    char nome;
    int quantidade;
    int voto[30];
};

void addVoto(struct Candidato* a, int tipoDeVoto){
    a->voto[a->quantidade] = tipoDeVoto;
    a->quantidade++;
    printf("\n%c --> %d , quant. votos: %d",a->nome ,tipoDeVoto , a->quantidade);
}

void printAll(struct Candidato* a){
    printf("\n\nPRINTING-----------CANDIDATO: %c\n",a->nome);
    for(int i=0; i < a->quantidade; i++){
        if(a->voto[i] == 1 ){
            printf("%d Voto Valido -> %d\n",a->voto[i],i);
        } else if (a->voto[i] == 2 ){
            printf("%d Voto Branco -> %d\n",a->voto[i],i);
        } else if (a->voto[i] == 3 ){
            printf("%d Voto Nulo -> %d\n",a->voto[i],i);
        }
    }
}


int quantidadeVotosValidos(struct Candidato* a){
    int votos=0;
    for(int i=0; i < a->quantidade; i++){
       if(a->voto[i]==1){
        votos++;
       }
    }
    return votos;
}

int quantidadeVotosNulos(struct Candidato* a){
    int votos=0;
    for(int i=0; i < a->quantidade; i++){
       if(a->voto[i]==3){
        votos++;
       }
    }
    return votos;
}

int quantidadeVotosBrancos(struct Candidato* a){
    int votos=0;
    for(int i=0; i < a->quantidade; i++){
       if(a->voto[i]==2){
        votos++;
       }
    }
    return votos;
}

void porcentagemDeVotos(struct Candidato* a, int quantidadeTotalDeEleitores){
        printf("\n\nPorcentagem De Votos-----------CANDIDATO: %c",a->nome);
        printf("\nVoto Valido ->: %f ",(double) (quantidadeVotosValidos(a) * 100) / quantidadeTotalDeEleitores);
        printf("\nVoto Branco ->: %f ",(double) (quantidadeVotosBrancos(a) * 100) / quantidadeTotalDeEleitores);
        printf("\nVoto Nulo ->: %f ",(double) (quantidadeVotosNulos(a) * 100) / quantidadeTotalDeEleitores);
}


int main(){ 
    struct Candidato A;
    struct Candidato B;
    struct Candidato C;

    A.quantidade = 0;
    A.nome = 'A';
    B.quantidade = 0;
    B.nome = 'B';
    C.quantidade = 0;
    C.nome = 'C';
    
    addVoto(&A,2);
    addVoto(&A,1);
    addVoto(&A,1);
    addVoto(&A,1);
    addVoto(&A,1);

    addVoto(&B,1);
    addVoto(&B,1);
    addVoto(&B,3);
    addVoto(&B,1);
    addVoto(&B,1);

    addVoto(&C,1);
    addVoto(&C,1);
    addVoto(&C,1);
    addVoto(&C,2);
    addVoto(&C,1);
    addVoto(&C,1);

    printAll(&A);
    printAll(&B);
    printAll(&C);


    porcentagemDeVotos(&A, A.quantidade+B.quantidade+C.quantidade);
    porcentagemDeVotos(&B, A.quantidade+B.quantidade+C.quantidade);
    porcentagemDeVotos(&C, A.quantidade+B.quantidade+C.quantidade);


    return 0;
}