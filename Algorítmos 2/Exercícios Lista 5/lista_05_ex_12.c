//12) Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
//para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz
//deve conter o valor 1 na diagonal secundária e 0 nas demais posições.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int n)
{
    int *p;
    int i, j = n - 1;

    p = calloc((n * n), (sizeof(int)));

    if(p == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    for(i = 0; i < n; i++)
    {
        p[i * n + j] = 1; //Mesma coisa do exercício passado, só que dessa vez j vai diminuindo até 0,
        //ao invés de aumentar até n - 1, fazendo com que preenchamos a diagonal secundária.
        j--;
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