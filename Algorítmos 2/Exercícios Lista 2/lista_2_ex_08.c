//Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
//vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros.

#include <stdio.h>

int preencher(int a[], int b)
{
    int *ap;

    ap = &a[0];

    for(*ap; *ap < (*ap + 5); *ap++)
    {
        *ap = b;
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Valor da pos. %d: %d", i, a[i]);
    }

}

int main()
{
    int a[5], b;

    printf("Digite um valor:\n");
    scanf("%d", &b);

    preencher(a, b);

    return 0;
}
