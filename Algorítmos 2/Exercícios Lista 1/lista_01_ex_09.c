//Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna
//o valor de S.
//S = 1 + 1/1! + ½! + 1/3! + 1 /N!

#include <stdio.h>

float soma_exp(int n)
{
    float soma = 1, n2, x = 1, i = 1, i2 = 1;

    n2 = n;
    for(i = 1; i <= n; i++)
    {
        for(i2 = 1; i2 <= n2; i2++)
        {
            x *= i2;
        }
        n2--;
        soma += (1 / x);
        x = 1;
    }

    return soma;
}

int main()
{
    float res;
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    res = soma_exp(n);

    printf("A soma ficou: %f", res);

    return 0;
}


