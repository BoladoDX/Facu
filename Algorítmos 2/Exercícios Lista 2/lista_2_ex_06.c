//Crie um programa que contenha um array com cinco elementos inteiros. Leia esse
//array do teclado e imprima o endereço das posições contendo valores pares.

#include <stdio.h>

int main()
{
    int a[5], *ap, i = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d:\n", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            ap = &a[i];
            printf("Endereco da posicao %d: %d\n", i, ap);
        }
    }

    return 0;
}
