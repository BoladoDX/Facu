//Faça um algoritmo que encontre o reverso de um número inteiro.

#include <stdio.h>

int main()
{
    int x, x2[20], reverso[20];
    int n, n2, n_digitos = 0, cap = 1, resto, i = 1, i2;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &x);

    if(x < 0)
    {
        x *= -1;
    }

    n = x;

    if(x < 10)
    {
        printf("Opcao invalida.");
        return 0;
    }

    if(n >= 10)
    {
        n2 = n;

        while(n2 > 0)
        {
            n2 /= 10;
            n_digitos++;
        }
        i2 = n_digitos - 1;

        while(i < n_digitos)
        {
            cap *= 10;
            i++;
        }
        i = 1;
    }

    x2[0] = n / cap;

    while(i < n_digitos)
    {
        resto = n % cap;
        cap /= 10;
        x2[i] = resto / cap;
        i++;
    }
    i = 0;

    while(i2 >= 0)
    {
        reverso[i2] = x2[i];
        i++;
        i2 += -1;
    }
    i = 0;

    printf("\nSeu reverso e: ");
    while(i < n_digitos)
    {
        printf("%d", reverso[i]);
        i++;
    }
    return 0;
}