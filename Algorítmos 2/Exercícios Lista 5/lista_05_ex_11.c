//11) Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
//para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz
//deve conter o valor 1 na diagonal principal e 0 nas demais posições.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int n)
{
    int *p;
    int i, j = 0;

    p = calloc((n * n), (sizeof(int)));

    if(p == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    for(i = 0; i < n; i++)
    {
        p[i * n + j] = 1; //Preenchendo os elementos da diagonal principal com 1. Não
        //precisamos preencher o resto com 0, visto que o calloc ja faz isso.
        j++;
    }

    return p;
}

int main()
{
    int n, *p;
    int i, j;

    printf("Digite um valor n:\n");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Digite um valor valido!\n");
        return 1;
    }

    p = funcao(n);

    if(p == NULL)
    {
        printf("Falha em retornar ponteiro pela funcao!\n");
        return 1;
    }

    printf("Matriz alocada dinamicamente pela funcao:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", p[i * n + j]);
        }
        printf("\n");
    }

    free(p);

    return 0;
}