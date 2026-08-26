//Utilizando o vetor criado anteriormente. Retorne a soma dos valores inseridos no vetor

#include <stdio.h>

int main()
{
    int i = 0, n = 0;
    float vetor[10], soma = 0;

    //Atribuindo valores de 1 - 10 nos espaços do vetor
    while(i <= 9)
    {
        n++;
        vetor[i] = n;
        i++;
    }
    i = 0;

    //Somando os valores de cada espaço
    while(i <= 9)
    {
        soma += vetor[i];
        i++;
    }

    printf("A soma e: %.2f.\n", soma);

    return 0;
}