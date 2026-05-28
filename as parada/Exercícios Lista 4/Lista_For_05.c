//Faça um algoritmo que leia dois valores: um número inteiro x e um número inteiro n (n ≥ 0).
//Calcule e mostre o valor de x elevado a n (xⁿ), sem utilizar funções prontas.

#include <stdio.h>

int main()
{
    int x, n, cont, total = 0;

    printf("Digite doi numeros inteiros respectivamente (Ex: 2 3):\n");
    scanf("%d %d", &x, &n);

    total = x;

    for(cont = 1; cont != n; cont++)
    {
        total *= x;
    }

    printf("%d elevado a %d e igual a: %d.\n", x, n, total);

    return 0;
}