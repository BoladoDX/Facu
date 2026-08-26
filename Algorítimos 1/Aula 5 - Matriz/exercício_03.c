//Utilizando a matriz criada anteriormente. Retorne
//os números primos presentes na matriz.

#include <stdio.h>

int main()
{

    int matriz[3][3], i, j, pos1 = 1, pos2 = 1, n = 1, divisores = 0;

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

    printf("\nDos numeros que voce digitou, sao primos:\n");
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            while(matriz[i][j] >= n)
            {
                if(matriz[i][j] % n == 0)
                {
                    divisores++;
                }
                n++;
            }

            if(divisores == 2)
            {
                printf("%d ", matriz[i][j]);
            }
            divisores = 0;
            n = 1;
        }
    }

    return 0;
}