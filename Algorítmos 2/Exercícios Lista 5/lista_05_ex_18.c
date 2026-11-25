//18) Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus
//tamanhos. A função deve retornar o ponteiro para uma matriz C, em que C é o produto
//da multiplicação da matriz A pela matriz B. Se a multiplicação das matrizes não for
//possível, retorne um ponteiro nulo.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int *a, int *b, int n1, int m1, int n2, int m2)
{
    int *c;
    int i, j, k;
    int soma;

    if(m1 != n2)
    {
        printf("Nao eh possivel realizar a multiplicacao de matrizes!\n"); //Multiplicação de matrizes
        //só é possivel quando uma matriz A tem o mesmo numero de linhas que B tem de colunas, ou vice-versa.
        return NULL;
    }

    c = calloc((n1 * m2), sizeof(int));

    if(c == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    for(i = 0; i < n1; i++)
    {
        for(k = 0; k < m2; k++)
        {
            soma = 0;

            for(j = 0; j < m1; j++)
            {
                soma += a[i * m1 + j] * b[j * m2 + k];
            }

            c[i * m2 + k] = soma;
        }
    }

    return c;
}

int main()
{
    int n1, m1, n2, m2, *c;
    int i, j;

    printf("Digite as dimensoes da matriz A:\n");
    scanf("%d %d", &n1, &m1);
    printf("Digite as dimensoes da matriz B:\n");
    scanf("%d %d", &n2, &m2);

    if(((n1 <= 0)||(m1 <= 0))||((n2 <= 0)||(m2 <= 0)))
    {
        printf("Digite valores validos!\n");
        return 1;
    }

    int a[n1][m1], b[n2][m2];

    //Preencher a matriz A
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < m1; j++)
        {
            printf("Digite o valor de A[%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //Preencher a matriz B
    for(i = 0; i < n2; i++)
    {
        for(j = 0; j < m2; j++)
        {
            printf("Digite o valor de B[%d][%d]:\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    //Impressao da matriz A
    printf("Matriz A %dx%d:\n", n1, m1);
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < m1; j++)
        {
            printf("%2d ", a[i][j]);   
        }
        printf("\n");
    }

    //Impressao da matriz B
    printf("Matriz B %dx%d:\n", n2, m2);
    for(i = 0; i < n2; i++)
    {
        for(j = 0; j < m2; j++)
        {
            printf("%2d ", b[i][j]);   
        }
        printf("\n");
    }

    c = funcao(&a[0][0], &b[0][0], n1, m1, n2, m2);

    if(c == NULL)
    {
        return 1;
    }

    //Impressao da matriz C
    printf("Matriz C %dx%d = produto de A x B:\n", n1, m2);
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < m2; j++)
        {
            printf("%2d ", c[i * m2 + j]);   
        }
        printf("\n");
    }

    free(c);

    return 0;
}