//Crie um programa que contenha um array de float com 10 elementos. Imprima o
//endereço de cada posição desse array.

#include <stdio.h>

int main()
{
    float a[10], *ap;

    for(int i = 0; i < 10; i++)
    {
        ap = &a[i];

        printf("A posicao %d do vetor 'a[10]' tem o endereco: %f\n", i, *ap);
    }

    return 0;
}