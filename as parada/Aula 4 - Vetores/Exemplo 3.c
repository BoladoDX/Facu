//Utilizando o vetor criado anteriormente. Retorne os números primos
//presentes no vetor.

#include <stdio.h>

int main()
{
    int vetor[10], i = 0, n = 0, n2 = 1, divisores = 0;

    //Atribuindo valores de 1 - 10 nos espaços do vetor
    while(i <= 9)
    {
        n++;
        vetor[i] = n;
        i++;
    }
    i = 0;

    //Verificando se são primos os valores de cada espaço
    while(i <= 9)
    {
        while(n2 <= vetor[i])
        {
            if(vetor[i] % n2 == 0)
            {
                divisores++;
            }
            n2++;
        }

        if(divisores == 2)
        {
            printf("%d eh primo.\n", vetor[i]);
        }

        divisores = 0;
        n2 = 1;
        i++;
    }

    return 0;
}