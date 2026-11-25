//14) Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N
//cada. A função deve retornar o ponteiro para um vetor C de tamanho N alocado
//dinamicamente, em que C[i] = A[i] + B[i].

#include <stdio.h>
#include <stdlib.h>

int *funcao(int *a, int *b, int tamanho)
{
    int *c;

    c = calloc(tamanho, sizeof(int));

    if(c == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    for(int i = 0; i < tamanho; i++)
    {
        c[i] = a[i] + b[i];
    }

    return c;
}

int main()
{
    int *c, n, i;

    printf("Digite um valor n:\n");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Digite um valor valido!\n");
        return 1;
    }

    int a[n], b[n];

    for(i = 0; i < n; i++)
    {
        printf("Digite o valor de A[%d] e B[%d] respectivamente (Ex: 2 3):\n", i, i);
        scanf("%d %d", &a[i], &b[i]);
    }

    c = funcao(a, b, n);

    if(c == NULL)
    {
        printf("Falha em retornar ponteiro pela funcao!\n");
        return 1;
    }

    printf("Vetor C[i] = A[i] + B[i]:\n");
    for(i = 0; i < n; i++)
    {
        printf("C[%d] = %d\n", i, c[i]);
    }

    free(c);

    return 0;
}