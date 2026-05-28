#include <stdio.h>

int main()
{
    int matriz[3][3], n = 1;  //matrizes são representadas com duas chaves, nelas você insere o tamanho da matriz, nesse caso 3x3.
    int i, j;   //"i" representa a posição da linha, "j" epresenta a posição da coluna.

    //laço que atribui valores de 1 a 9 para cada espaço da matriz.
    for(i = 0;i < 3; i++)
    {
        for(j = 0;j < 3; j++)
        {
            matriz[i][j] = n;
            n++;
        }
    }

    //seria a mesma coisa que isso:
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;   //mas dá muito trabalho.
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;


    //laço que imprime cada espaço da matriz.
    for(i = 0;i < 3; i++)
    {
        for(j = 0;j < 3; j++)
        {
            printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}