//Faça uma matriz de dimensão 3 do tipo inteiro. Insira
//os elementos e depois imprima-os.

#include <stdio.h>

int main()
{

    int matriz[3][3], i, j, pos1 = 1, pos2 = 1;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Digite o valor do espaco %d - %d da matriz: \n", pos1, pos2);
            scanf("%d", &matriz[i][j]);
            pos2++;
        }
        pos1++;
        pos2 = 1;
    }
    pos1 = 1;
    pos2 = 1;

    printf("\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("O valor inserido em %d - %d e: %d\n", pos1, pos2, matriz[i][j]);
            pos2++;
        }
       pos1++;
       pos2 = 1;
    }

    return 0;
}