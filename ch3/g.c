// g) Ler quatro numeros inteiros e apresentar o resultado da adi�ao e multiplica�ao, baseando-se na utiliza�ao do conceito da propriedade distributiva. Ou seja, se forem lidas as variaveis A, B, C, e D, devem ser somadas e multiplicadas A com B, A com C e A com D. Depois B com C, B com D e por fim C com D. Perceba que sera necessario efetuar seis opera��es de adi�ao e seis opera��es de multiplica�ao e apresentar doze resultados de saida.

 #include <stdio.h>

void main(){
    int A, B, C, D;
    A = B = C = D = 2;
    int soma;
    int mult;

    printf("A + B = %d", soma = A + B);
    printf("\nA + C = %d", soma = soma + C);
    printf("\nA + D = %d", soma = soma + D);

    
    printf("\n\nA * B = %d", mult = A * B);
    printf("\nA * C = %d", mult = mult * C);
    printf("\nA * D = %d", mult = mult * D);


}
 