//17) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e
//N colunas. A função deve retornar o ponteiro para um vetor B de tamanho N alocado
//dinamicamente, em que cada posição de B é a soma dos números daquela coluna da
//matriz.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int *a, int tamanho)
{
    int *b;
    int i, j;
    int soma;

    b = calloc(tamanho, sizeof(int));

    if(b == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    for(i = 0; i < tamanho; i++)
    {
        soma = 0;

        for(j = 0; j < tamanho; j++)
        {
            soma += a[j * tamanho + i];
        }

        b[i] = soma;
    }

    return b;
}

int main()
{
    int n, *b;
    int i, j;

    printf("Digite um numero n:\n");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Digite um valor valido!\n");
        return 1;
    }

    int a[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Digite o valor de A[%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("A matriz A %dx%d ficou:\n", n, n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    b = funcao(&a[0][0], n);

    if(b == NULL)
    {
        printf("Falha em retornar ponteiro pela funcao!\n");
        return 1;
    }

    printf("O vetor B[i] = soma da coluna i de A ficou:\n");
    for(i = 0; i < n; i++)
    {
        printf("B[%d] = %d\n", i, b[i]);
    }

    free(b);

    return 0;
}