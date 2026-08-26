//Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a
//taboada de 1 até N. Mostre a tabuada na forma:
// 1 x N = N
// 2 x N = 2N
// ...
// N x N = N^2

#include <stdio.h>

void tabuada(int n)
{
    int i = 1, res;

    for(i = 1; i <= n; i++)
    {
        res = (n * i);
        printf("%d x %d = %d\n", i, n, res);
    }

    return;
}

int main()
{
    int n;

    printf("Digite um nomero para a tabuada:\n");
    scanf("%d", &n);
    printf("Tabuada de %d:\n", n);

    tabuada(n);

    return 0;
}