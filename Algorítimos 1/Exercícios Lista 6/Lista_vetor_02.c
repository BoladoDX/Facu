//Faça um programa que carregue um vetor com oito números inteiros e mostre:
//- Os números múltiplos de dois;
//- Os números múltiplos de três;
//- Os números múltiplos de dois e de três.

#include <stdio.h>

int main()
{
    int vetor[8], i = 0, n = 0;

    for(i = 0; i <= 7; i++)
    {
        n += 3;
        vetor[i] = n;
    }

    for(i = 0; i <= 7; i++)
    {
        if((vetor[i] % 2 == 0) && (vetor[i] % 3 != 0))
        {
            printf("%d eh multiplo de 2.\n", vetor[i]);
        }

        if((vetor[i] % 3 == 0) && (vetor[i] % 2 != 0))
        {
            printf("%d eh multiplo de 3.\n", vetor[i]);
        }

        if((vetor[i] % 2 == 0) && (vetor[i] % 3 == 0))
        {
            printf("%d eh multiplo de 2 e 3.\n", vetor[i]);
        }
    }

    return 0;
}