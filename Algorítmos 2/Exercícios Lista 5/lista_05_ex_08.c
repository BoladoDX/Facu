//8) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o
//ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
//igual a zero, um ponteiro nulo deverá ser retornado.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int n)
{
    int *p;

    if(n <= 0)
    {
        return NULL;
    }

    p = calloc(n, sizeof(int));

    if(p == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    return p;
}

int main()
{
    int n, *p;

    printf("Digite um valor n:\n");
    scanf("%d", &n);

    p = funcao(n);

    if(p == NULL)
    {
        printf("Ponteiro nulo retornado!\n");
    }
    else
    {
        printf("Ponteiro de tamanho %d alocado dinamicamente retornado!\n", n);
    }

    free(p);

    return 0;
}