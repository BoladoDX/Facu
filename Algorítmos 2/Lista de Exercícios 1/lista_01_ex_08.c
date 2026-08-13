//Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o
//somatório de 1 até n: 1 + 2 + 3 + ... + n.

#include <stdio.h>

int somatorio(int n)
{
    int n1, soma = 0;

    for(n1 = 1; n1 <= n; n1++)
    {
        soma += n1;
    }

    return soma;
}

int main()
{
    int num, res;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    res = somatorio(num);

    printf("Somatorio dos numeros de 1 ate %d: %d", num, res);

    return 0;
}
