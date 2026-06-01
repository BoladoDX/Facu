//Escrever um algoritmo que lê uma matriz A(15,5) e a escreva (valores randômicos*).
//Verifique, a seguir, quais os elementos de A que estão repetidos e quantas vezes cada
//um está repetido.
//Escrever cada elemento repetido com uma mensagem dizendo que
//o elemento aparece X vezes em A.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[15][5], B[75], z, z2, i, j, x, y, cont = 0, cont2 = -1, ver;

    //adicionando valores impossiveis para o vetor de comparação
    for(z = 0; z < 75; z++)
    {
        B[z] = 11;
    }
    z = 0;

    //função que gera valores aleatórios de 1 até 0
    srand(time(0));
    for(i = 0; i < 15; i++)
    {
        for(j = 0; j < 5; j++)
        {
            A[i][j] = (rand() % 10);
        }
    }

    //impressão da matriz
    printf("Sua matriz ficou:\n");

    for(i = 0; i < 15; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }
    j = 0;

    //verificador de termos iguais
    for(i = 0; i < 15; i++)
    {
        for(j = 0; j < 5; j++)
        {
            ver = A[i][j];
            for(x = 0; x < 15; x++)
            {
                for(y = 0; y < 5; y++)
                {
                    if(ver == A[x][y])
                    {
                        cont++;
                    }
                }
            }
            
            B[z] = ver;
            z++;
            //verificando se algum valor da matriz se repete, para não imprimir a repetição
            //do mesmo elemento
            for(z2 = 0; z2 < 75; z2++)
            {
                if(ver == B[z2])
                {
                    cont2++;
                }
            }
            
            if(cont2 < 1)
            {
                if(cont > 0)
                {
                    printf("\nO elemento %d da matriz se repete %d vezes.", ver, cont);
                }
            }
            cont = 0;
            cont2 = -1;
        }
    }


    return 0;
}