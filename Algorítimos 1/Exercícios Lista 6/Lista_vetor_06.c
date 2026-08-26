////Dado um vetor A de tamanho 8 e do tipo inteiro faça um programa em C que, utilizando um laço de repetição,
//receba os valores de entrada e, utilizando outro laço de repetição,
//verifique qual o maior valor do vetor e apresente esse valor.

#include <stdio.h>

int main()
{
    int A[8], i, posicao = 1, n_maior = 0;

    for(i = 0; i < 8; i++)
    {
        printf("Digite o valor do %do espaco do vetor:\n", posicao);
        scanf("%d", &A[i]);
        
        if(A[i] >= n_maior)
        {
            n_maior = A[i];
        }
        posicao++;
    }

    printf("O maior numero digitado foi: %d\n", n_maior);

    return 0;
}