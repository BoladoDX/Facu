//Crie um programa que contenha uma matriz de float com três linhas e três colunas.
//Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>

int main()
{
    float a[3][3], *ap;
    int i = 0, j = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            ap = &a[i][j];
            printf("A posicao %d - %d da matriz 'a[3][3] tem o endereco: %f\n", i, j, *ap);
        }
    }

    return 0;
}
