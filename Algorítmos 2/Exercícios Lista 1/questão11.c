#include <stdio.h>

int main()
{
    int i, peso, total = 0, soma = 0, media;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o peso em gramas da %da peca:\n", i);
        scanf("%d", &peso);

        if(peso < 145)
        {
            printf("Refugada por falta de material\n\n");
        }
        if((peso >= 145) && (peso <= 155))
        {
            printf("Aprovada\n\n");

            total++;
            soma += peso;
        }
        if(peso > 155)
        {
            printf("Refugada por excesso\n\n");
        }
    }

    media = (soma / total);

    printf("Total de pecas aprovadas: %d\nMedia de peso das pecas aprovadas: %d", total, media);

    return 0;
}