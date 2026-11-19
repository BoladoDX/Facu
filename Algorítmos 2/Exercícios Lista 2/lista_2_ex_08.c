//Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
//vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros.

#include <stdio.h>

void preencher(int *a, int tamanho, int b)
{
    int *ap;

    ap = a;

    for(int i = 0; i < tamanho; i++)
    {
        *ap = b;
        ap++;
    }

    ap = a;

    for(int i = 0; i < tamanho; i++)
    {
        printf("Valor da pos. %d: %d\n", i, *ap);
        ap++;
    }

    return;
}

int main()
{
    int a[5], b;

    printf("Digite um valor:\n");
    scanf("%d", &b);

    preencher(a, 5, b);

    return 0;
}
