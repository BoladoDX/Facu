//Escreva um programa que aloque dinamicamente uma matriz de inteiros. As
//dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função que
//receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso
//contrário

#include <stdio.h>
#include <stdlib.h>

int procura_valor(int n, int *m, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        if(*m == n)
        {
            return 1;
        }

        m++;
    }

    return 0;
}

int main()
{
    int n1, n2, *p;
    int i, j, k = 0;
    int n, res;

    printf("Digite as dimensoes da matriz (Ex: 2 3):\n");
    scanf("%d %d", &n1, &n2);

    int m[n1][n2];

    p = calloc((n1 * n2), sizeof(int));

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            m[i][j] = k;
            k++;
        }
        k++;
    }

    printf("Digite um valor a ser procurado dentro da matriz:\n");
    scanf("%d", &n);

    res = procura_valor(n, m, (n1 * n2));

    printf("Valor retornado (1 = Verdadeiro, 0 = Falso): %d", res);

    free(p);

    return 0;
}