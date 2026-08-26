//Escreva um algoritmo que encontre a quantidade de algarismos de um número inteiro n.

#include <stdio.h>

int main()
{
    int x;
    int n = 1, qt_algarismos = 1, cap = 10;

    printf("Digite um numero inteiro (ex: 100):\n");
    scanf("%d", &x);

    if(x < 0)
    {
        x *= -1;
    }

    while(n <= x)
    {
        if(n == cap)
        {
            qt_algarismos++;
            cap *= 10;
        }
        n++;
    }

    printf("\nQuantidade de algarismos: %d", qt_algarismos);
    return 0;
}