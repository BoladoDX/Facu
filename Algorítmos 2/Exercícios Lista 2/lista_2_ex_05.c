//Crie um programa que contenha um array de inteiros com cinco elementos.
//Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro
//de cada valor lido.

#include <stdio.h>

int main()
{
    int a[5], *ap, i = 0;

    ap = &a[0];

    for(*ap; i < 5; *ap++)
    {
        printf("Digite o valor da posicao %d do vetor 'a[5]':\n", i);
        scanf("%d", &*ap);
        i++;
    }

    ap = &a[0];

    for(i = 0; i < 5; i++)
    {
        *ap *= 2;
        *ap++;
    }

    for(i = 0; i < 5; i++)
    {
        printf("O dobro do valor da posicao %d eh: %d\n", i, a[i]);
    }

    return 0;
}