//10) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
//o ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter
//os seus elementos preenchidos com certo valor, também passado por parâmetro. Se N
//for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int n, int m)
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

    for(int i = 0; i < n; i++)
    {
        p[i] = m;
    }

    return p;
}

int main()
{
    int n, m, *p;

    printf("Digite um valor n:\n");
    scanf("%d", &n);
    printf("Digite um valor para preencher o vetor de tamanho %d:\n", n);
    scanf("%d", &m);

    p = funcao(n, m);

    if(p == NULL)
    {
        printf("Ponteiro nulo retornado!\n");
    }
    else
    {
        printf("Ponteiro de tamanho %d alocado dinamicamente retornado!\n", n);

        for(int i = 0; i < n; i++)
        {
        printf("p[%d] = %d\n", i, p[i]);
        }
    }

    free(p);

    return 0;
}