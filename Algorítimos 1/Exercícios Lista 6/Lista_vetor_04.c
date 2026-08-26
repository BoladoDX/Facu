//Dado um vetor A de tamanho 10 e do tipo inteiro faça um programa em C que,
//utilizando um laço de repetição, insira os valores de 21 a 30 nesse vetor.

#include <stdio.h>

int main()
{
    int A[10], i, n = 21, posicao = 1;

    for(i = 0; i < 10; i++)
    {
        A[i] = n;
        n++;
    }

    for(i = 0; i < 10; i++)
    {
        printf("%do Vetor: %d\n", posicao, A[i]);
        posicao++;
    }

    return 0;
}