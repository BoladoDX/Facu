//Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros

#include <stdio.h>

void imprime_vetor(int *p, int tamanho)
{
    int i = 0;

    for(i = 0; i < tamanho; i++)
    {
        printf("V[%d]: %d, endereco: %d\n", i, *p, p);
        p++;
    }
    return;
}

int main()
{
    int v[5], i = 0;

    for(i = 0; i < 5; i++)
    {
        v[i] = i + 1;
    }

    printf("Impressao do vetor:\n");

    for(i = 0; i < 5; i++)
    {
        printf("V[%d]: %d, endereco: %d\n", i, v[i], &v[i]);
    }

    printf("\nImpressao do vetor pela funcao e aritmetica de ponteiros:\n");

    imprime_vetor(v, 5);

    return 0;
}