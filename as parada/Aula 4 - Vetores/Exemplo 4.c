//Faça um programa que receba um vetor com 6 números
//inteiros e mostre dois vetores diferentes. O primeiro vetor
//resultante deve conter apenas os números positivos. O
//segundo vetor resultante deve conter somente os números negativo.

#include <stdio.h>

int main()
{
    int vetor[6], resultante1[3], resultante2[3], i = 0, n1 = 0, n2 = 0;

    //Atribuindo metade dos espaços do vetor valores positivos e a outra metade valores negativos
    vetor[0] = 1;
    vetor[1] = -1;
    vetor[2] = 2;
    vetor[3] = -2;
    vetor[4] = 3;
    vetor[5] = -3;

    //Verificando os valores e armazenando-os nos vetores resultantes
    for(i = 0; i <= 5; i++)
    {
        if(vetor[i] > 0)
        {
            resultante1[n1] = vetor[i];
            n1++;
        }
        if(vetor[i] < 0)
        {
            resultante2[n2] = vetor[i];
            n2++;
        }
    }

    //Imprimindo os vetores resultantes
    printf("Valores positivos do vetor:\n");
    for(i = 0; i <= 2; i++)
    {
        printf("%d ", resultante1[i]);
    }
    printf("\nValores negativos do vetor:\n");
    for(i = 0; i <= 2; i++)
    {
        printf("%d ", resultante2[i]);
    }

    return 0;
}
