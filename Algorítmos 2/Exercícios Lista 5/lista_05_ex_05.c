//Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
//inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em
//seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá ser
//maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p;

    while(1)
    {
        printf("Digite um valor inteiro n positivo:\n");
        scanf("%d", &n);
        
        if(n >= 0)
        {
            break;
        }

        printf("Digite um valor valido!\n\n");
    }

    int v[n];

    p = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("Digite o valor do vetor de posicao %d (deve ser >= 2):\n", i);
        scanf("%d", &v[i]);
        if(v[i] < 2)
        {
            printf("Digite um valor valido!\n\n");
            i--;
        }
    }

    printf("Impressao do vetor lido:\n");
    for(int i = 0; i < n; i++)
    {
        printf("V[%d]: %d\n", i, v[i]);
    }

    free(p);

    return 0;
}
