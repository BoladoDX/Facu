//Escreva um algoritmo para encontrar o Mdc entre dois números inteiros, x e y.

#include <stdio.h>

int main()
{
    int x, y, divisor;
    int n = 1, cont;

    printf("Digite dois numeros inteiros respectivamente (ex: 12 18):\n");
    scanf("%d %d", &x, &y);

    if(x >= y)
    {
        cont = x;
    }
    if(y >= x)
    {
        cont = y;
    }

    while(n < cont)
    {
        if(((x % n == 0) && (y % n == 0)) && ((n != x) && (n != y)))
        {
            divisor = n;
        }
        n++;
    }

    printf("\nMDC: %d", divisor);
    return 0;
}