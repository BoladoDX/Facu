#include <stdio.h>

int main()
{
    int a[5], *ap, i;

    for(i = 0; i < 5; i++)
    {
        a[i] = (1 + i);
    }
    for(i = 0; i < 5; i++)
    {
        printf("Valor da posicao %d: %d\n", i, a[i]);
    }


    ap = &a[0]; 

    i = 0;

    printf("\n");
    while(i < 5)
    {
        printf("Valor da posicao %d: %d\n", i, *ap);
        *ap++;
        i++;
    }

    return 0;
}