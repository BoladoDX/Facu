//Crie um programa que contenha um array com cinco elementos inteiros. Leia esse
//array do teclado e imprima o endereço das posições contendo valores pares.

#include <stdio.h>

int main()
{
    int a[5], *ap, i = 0;

    ap = &a[0];

    for(i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d:\n", i);
        scanf("%d", &*ap);
        ap++;
    }

    ap = &a[0];

    for(i = 0; i < 5; i++)
    {
        if(*ap % 2 == 0)
        {
            printf("O valor da posicao a[%d] de endereco %d eh par\n", i, ap);
        }
        ap++;
    }

    return 0;
}
