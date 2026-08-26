//Dado os vetores A e B de tamanho 6 e do tipo float faça um programa em C que, utilizando um laço de repetição,
//e, utilizando outro laço, inicialize os valores de ambos os vetores,
//some os valores posição por posição e guarde o novo valor no vetor A.

#include <stdio.h>

int main()
{
    float A[6], B[6];
    int i, posicao = 1;

    for(i = 0; i < 6; i++)
    {
        printf("Digite o valor do %do espaco do vetor A:\n", posicao);
        scanf("%f", &A[i]);
        posicao++;
    }
    posicao = 1;

    for(i = 0; i < 6; i++)
    {
        printf("Digite o valor do %do espaco do vetor B:\n", posicao);
        scanf("%f", &B[i]);
        posicao++;
    }
    posicao = 1;

    for(i = 0; i < 6; i++)
    {
        A[i] = (A[i] + B[i]);
    }

    printf("\n");
    for(i = 0; i < 6; i++)
    {
        printf("Novo valor do %do espaco do vetor A: %.2f\n", posicao, A[i]);
    }

    return 0;
}