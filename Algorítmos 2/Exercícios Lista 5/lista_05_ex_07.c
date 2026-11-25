//7) Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
//alocados dinamicamente. O array deve ser preenchido com valores de 0 a N − 1.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int n)
{
    int *p;

    p = calloc(n, sizeof(int));

    if(p == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    for(int i = 0; i < n; i++)
    {
        p[i] = i;
    }

    return p;
}
int main()
{
    int n, *p;

    printf("Digite um valor n inteiro:\n");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Valor invalido!\n");
        return 1;
    }

    p = funcao(n);

    if(p == NULL)
    {
        printf("Falha em retornar ponteiro pela funcao!\n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    return 0;
}