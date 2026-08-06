#include <stdio.h>

int main()
{
    int i, i2, n, divisores = 0, soma = 0, n_maior = 0;

    printf("Digite o numero inicial e final do intervalo respectivamente (Ex: 1 20):\n");
    scanf("%d %d", &i, &i2);
    printf("\n");

    for(i; i <= i2; i++)
    {
        for(n = 1; n <= i; n++)
        {
            if(i % n == 0)
            {
                divisores++;
            }
        }

        if(divisores == 2)
        {
            printf("%d true\n", i);

            soma += i;

            if(i >= n_maior)
            {
                n_maior = i;
            }
        }

        if(divisores != 2)
        {
            printf("%d false\n", i);
        }

        divisores = 0;
    }

    printf("\nSoma dos primos: %d\nPrimo maior: %d", soma, n_maior);
    
    return 0;
}