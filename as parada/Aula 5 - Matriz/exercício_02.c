//Utilizando a matriz criada anteriormente. Retorne a
//soma dos valores inseridos na matriz.

#include <stdio.h>

int main()
{

    int matriz[3][3], i, j, pos1 = 1, pos2 = 1, soma = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Digite o valor do espaco %d - %d da matriz: \n", pos1, pos2);
            scanf("%d", &matriz[i][j]);
            pos2++;

            soma += matriz[i][j];
        }
        pos1++;
        pos2 = 1;
    }

    printf("\nA soma dos valores da matriz e igual a: %d\n", soma);

    return 0;
}