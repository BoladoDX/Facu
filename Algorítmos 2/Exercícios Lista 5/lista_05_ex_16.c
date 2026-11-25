//16) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e
//N colunas, e um vetor B de tamanho N. A função deve retornar o ponteiro para um
//vetor C de tamanho N alocado dinamicamente, em que C é o produto da matriz A pelo
//vetor B.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int *a, int *b, int tamanho)
{
    int *c;
    int i, j;
    int soma;

    c = calloc(tamanho, sizeof(int));

    if(c == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    for(i = 0; i < tamanho; i++)
    {
        soma = 0;

        for(j = 0; j < tamanho; j++)
        {
            soma += a[i * tamanho + j] * b[j];
        }

        c[i] = soma;
    }

    return c;
}
int main()
{
    int *c, n;
    int i, j;

    printf("Digite um valor n:\n");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Digite um valor valido!\n");
        return 1;
    }

    int a[n][n], b[n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Digite o valor de A[%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("Digite o valor de B[%d]:\n", i);
        scanf("%d", &b[i]);
    }

    c = funcao(&a[0][0], b, n);

    if(c == NULL)
    {
        printf("Falha em retornar ponteiro pela funcao!\n");
        return 1;
    }

    printf("Vetor C = A * B:\n");
    for(i = 0; i < n; i++)
    {
        printf("C[%d] = %d\n", i, c[i]);
    }

    free(c);

    return 0;
}