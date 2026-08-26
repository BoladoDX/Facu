//Faça um algoritmo que leia um número inteiro n (n ≥ 0) e calcule
//o fatorial de n (n!). Considere que 0! = 1. Ao final, mostre o resultado.

#include <stdio.h>

int main()
{
    int n, x, total = 0;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    total = n;
    x = n;

    for(x; x != 1;)
    {
        x -= 1;
        total *= x;
    }

    printf("O fatorial de %d e igual a: %d.\n", n, total);

    return 0;
}