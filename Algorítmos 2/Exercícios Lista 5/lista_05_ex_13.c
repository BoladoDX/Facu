//13) Escreva um programa que leia um inteiro N e crie uma matriz alocada
//dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na
//diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor −1 nos
//elementos abaixo da diagonal principal.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int n)
{
    int *p;
    int i, j, k = 1;

    p = calloc((n * n), (sizeof(int)));

    if(p == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    //Preenchendo elementos acima da diagonal principal com 1
    for(i = 0; i < n; i++)
    {
        for(j = k; j < n; j++)
        {
            p[i * n + j] = 1;
        }
        k++;
    }

    //Preencheno elementos abaixo da diagonal principal com -1
    k = (n - 2);
    for(i = (n - 1); i >= 0; i--)
    {
        for(j = k; j >= 0; j--)
        {
            p[i * n + j] = -1;
        }
        k--;
    }

    //Já que temos que manejar a matriz sendo um ponteiro,
    //ao invés de a percorrermos num formato de p[linha][coluna], nós temos que trata-la
    //como um vetor linear, por isso, para organizarmos uma matriz ponteiro em linha-coluna,
    //utilizamos o formato de p[linha * tamanho + coluna].
    //Para preencher de acordo com o enunciado da questão, são apenas truques algébricos
    //seguindo esse formato.

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
            printf("%2d ", p[i * n + j]);
        }
        printf("\n");
    }

    free(p);

    return 0;
}