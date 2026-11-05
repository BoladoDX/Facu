//Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
//seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
//imprima.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p;

    printf("Digite o tamanho do vetor a ser lido:\n");
    scanf("%d", &n);

    int v[n];

    p = calloc(n, sizeof(int));

    if(p == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("Digite o numero para a posicao %d do vetor:\n", i);
        scanf("%d", &v[i]);
    }

    printf("\nImpressao do vetor lido:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Posicao %d: %d\n", i, v[i]);
    }

    free(p);

    return 0;
}