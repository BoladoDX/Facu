#include <stdio.h>

int main()
{
    int n, i, aux, soma = 0, media;

    printf("Digite a quantidade de valores: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Digite o %do valor: \n", i);
        scanf("%d", &aux);

        soma += aux;
    }

    media = (soma / n);

    printf("A media aritmetica eh: %d.", media);

    return 0;
}