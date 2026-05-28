//Faça um algoritmo que leia um número inteiro n (n > 0) e calcule
//a soma dos n primeiros números primos. Ao final, mostre o resultado.

#include <stdio.h>

int main()
{
    int n, n1 = 1, n2 = 1, soma = 0, qt_primo = 0, divisores = 0;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    do
    {
        while(n2 <= n1)
        {
            if(n1 % n2 == 0)
            {
                divisores++;
            }
            n2++;
        }
    
        if(divisores == 2)
        {
            soma += n1;
            qt_primo++;
        }
        n2 = 1;
        divisores = 0;
        n1++;
    }
    while(qt_primo != n);

    printf("A soma dos %d primeiros numeros primos e: %d.\n", n, soma);

    return 0;
}