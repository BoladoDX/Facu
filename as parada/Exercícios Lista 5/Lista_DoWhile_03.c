//Faça um algoritmo que leia um número natural e apresente sua representação em binário.

#include <stdio.h>

int main()
{
    int n, dividindo;

    printf("Digite o numero que deseja transformar em binario:\n");
    scanf("%d", &n);
    printf("Sua representacao binaria e igual a:\n");

    dividindo = n;

    do
    {
        if(dividindo % 2 == 0)
        {
            printf("0");
        }
        if(dividindo % 2 == 1)
        {
            printf("1");
        }
        dividindo /= 2;
    }
    while(dividindo != 1);
    printf("1");
    printf("\n(Esta de tras para frente)\n");

    return 0;
}