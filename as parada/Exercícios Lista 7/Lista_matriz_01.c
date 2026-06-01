//Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
//a. Da linha 4 de M
//b. Da coluna 2 de M
//c. Da diagonal principal de M
//d. De todos os elementos da matriz M
//OBS: Escrever essas somas e a matriz.

#include <stdio.h>

int main()
{
    float M[5][5], soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    int i, j, pos1 = 1, pos2 = 1;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Digite o valor do espaco %d - %d:\n", pos1, pos2);
            scanf("%f", &M[i][j]);
            pos2++;
        }
        pos1++;
        pos2 = 1;
    }

    printf("\nSua matriz ficou:\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%3.0f ", M[i][j]);
        }
        printf("\n");
    }

    //Soma da linha 4:
    for(i = 0; i < 5; i++)
    {
        soma1 += M[3][i];
    }

    printf("\nSoma da linha 4: %.2f", soma1);

    //Soma da coluna 2
    for(i = 0; i < 5; i++)
    {
        soma2 += M[i][1];
    }   

    printf("\nSoma da coluna 2: %.2f", soma2);

    //Soma da diagonal principal de M
    for(i = 0; i < 5; i++)
    {
        soma3 += M[i][i];
    }

    printf("\nSoma da diagonal principal: %.2f", soma3);

    //Soma de todos os elementos da matriz M
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            soma4 += M[i][j];
        }
    }

    printf("\nSoma de todos os elementos da matriz: %.2f\n", soma4);
    
    return 0;
}