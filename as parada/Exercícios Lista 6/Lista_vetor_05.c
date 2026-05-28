//Dado um vetor A de tamanho 20 e do tipo inteiro faça um programa em C que, utilizando um laço de repetição,
//insira os valores de 5 a 24 e, utilizando outro laço de repetição,
//calcule o dobro de cada valor inserido e armazene em um vetor B.

#include <stdio.h>

int main()
{
    int A[20], B[20], i, n = 5, posicao = 1;

    for(i = 0; i < 20; i++)
    {
        A[i] = n;
        n++;
    }

    for(i = 0; i < 20; i++)
    {
        B[i] = 2*A[i];
    }    

    for(i = 0; i < 20; i++)
    {
        printf("%do Vetor: %d, seu dobro: %d\n", posicao, A[i], B[i]);
        posicao++;
    }

    return 0;
}