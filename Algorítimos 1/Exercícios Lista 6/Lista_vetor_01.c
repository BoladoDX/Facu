//Faça um programa que carregue um vetor de seis elementos numéricos inteiros e mostre:
//- A quantidade de números pares;
//- Quais são os números pares;
//- A quantidade de números ímpares;
//- Quais são os números ímpares.

#include <stdio.h>

int main()
{
    int vetor[6], i = 0, n = 0, qt_par = 0, qt_impar = 0;

    for(i = 0; i <= 5; i++)
    {
        n++;
        vetor[i] = n;
    }

    for(i = 0; i <= 5; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            qt_par++;
            printf("%d eh par.\n", vetor[i]);
        }

        if(vetor[i] % 2 != 0)
        {
            qt_impar++;
            printf("%d eh impar.\n", vetor[i]);
        }
    }

    printf("Quantidade de pares %d.\nQuantidade de impares: %d.\n", qt_par, qt_impar);

    return 0;
}