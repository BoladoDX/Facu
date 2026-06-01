//Escrever um algoritmo que lê uma matriz M(12,13) e divida todos os 13 elementos de cada 
//uma das 12 linhas de M pelo maior elemento em módulo daquela linha.
//Escrever a matriz lida e a modificada.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float M[12][13];
    float n, n_maior = -21;
    float divisao;
    int i, j;

    //recebimento de valores aleatórios para a matriz
    srand(time(0));
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 13; j++)
        {
            M[i][j] = (rand() % 41) + (-20);
        }
    }

    //impressão da matriz
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 13; j++)
        {
            printf("%3.0f ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Impressão da matriz modificada
    printf("Matriz modificada cujo maior elemento de cada linha divide a sua linha:\n");
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 13; j++)
        {
            if(M[i][j] < 0)
            {
                n = M[i][j]*(-1);
            }
            else 
            {
                n = M[i][j];
            }
            if(n > n_maior)
            {
                n_maior = n;
            }
        }
        printf("Maior: %3.0f || ", n_maior);
        for(j = 0; j < 13; j++)
        {
            divisao = (M[i][j])/n_maior;
            printf("%6.2f ", divisao);
        }
        n_maior = -21;
        printf("\n");
    }

    return 0;
}