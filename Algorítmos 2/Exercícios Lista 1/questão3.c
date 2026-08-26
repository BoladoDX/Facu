#include <stdio.h>

int main()
{
    int n, i, res;

    printf("Digite um numero para fazer a tabuada:\n");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        res = (n * i);

        printf("%dx%d = %d\n", n, i, res);
    }
    
    return 0;
}