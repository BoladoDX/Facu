//Escreva um algoritmo para encontrar o n-ésimo dígito dentro de um algarismo numérico – número inteiro.

#include <stdio.h>

int main()
{
    int x, p;
    int n, n_digitos, digito, tmp, cap = 1, i = 0;

    printf("Digite um numero inteiro (Ex: 105):\n");
    scanf("%d", &x);
    printf("Agora digite a posicao:\n");
    scanf("%d", &p);

    n = x;

    if(n == 0)
    {
        n_digitos = 1;
    }
    if(n > 0)
    {
        tmp = n;
        n_digitos = 0;

        while(tmp > 0)
        {
            tmp /= 10;
            n_digitos++;
        }
    }

    if((p < 1) || (p > n_digitos))
    {
        printf("Posicao invalida.");
        return 0;
    }

    while(i < (p - 1))
    {
        cap *= 10;
        i++;
    }

    digito = (n / cap) % 10;

    printf("O algarismo da %do posicao e: %d", p, digito);
 
    return 0;
}