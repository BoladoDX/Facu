//Escreva um algoritmo que faça a troca dos valores que se encontram na posição x e na posição y,
//do vetor A. Isto é, o valor da posição x passa para a posição y, e o valor da 
//posição y passa para a posição x.

#include <stdio.h>

int main()
{
    int A[10], i, j, aux;

    for(i = 0; i < 10; i++)
    {
        A[i] = i + 10;
    }

    printf("Seu vetor eh:\n");

    for(i = 1; i <= 10; i++)
    {
        printf("%do ", i);
    } 

    printf("\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    } 

    printf("\nEscolha uma posicao:\n");
    scanf("%d", &i);

    i -= 1;
    printf("Escolha a posicao para trocar de valor:\n");
    scanf("%d", &j);

    j -= 1;

    aux = A[i];
    A[i] = A[j];
    A[j] = aux;

    for(i = 1; i <= 10; i++)
    {
        printf("%do ", i);
    }

    printf("\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}