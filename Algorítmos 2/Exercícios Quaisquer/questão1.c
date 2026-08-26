#include <stdio.h>

int main()
{
    int n, i, aux, soma = 0, media;

    printf("Digite a quantidade de trabalhadores: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Digite o %do salario: \n", i);
        scanf("%d", &aux);

        soma += aux;
    }

    media = (soma / n);

    printf("A media salarial eh: RS%d.", media);

    return 0;
}