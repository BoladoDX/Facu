//Escreva uma função que procure a ocorrência de um vetor menor dentro de um vetor
//maior.
//-Assinatura: int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s);
//A função deve procurar se a sequência exata de números do vetor sub existe
//dentro de vetor. Se encontrar, retorne um ponteiro apontando para o início dessa
//ocorrência no vetor original. Se não encontrar, retorne NULL.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s)
{
    int i = 0, j = tam_v;
    int *p;
    
    for(j = 0; j < tam_v; j++)
    {
        if(*vetor == *sub)
        {
            sub++;
            i++;
            if(i = 3)
            {
                p = vetor;
                return p;
            }
        }
        if(*vetor != *sub)
        {
            vetor++;
            i = 0;
        }
    }
    return NULL;
}

int main()
{
    srand(time(NULL));

    int vetor[9], subvetor[3];
    int i, j, *p;

    printf("Vetor:\n");
    for(i = 0; i < 9; i++)
    {
        vetor[i] = i + 1;
        printf("V[%d]: %d, end: %d\n", i, vetor[i], &vetor[i]);
    }

    j = rand() % 8;
    printf("\nSub-Vetor:\n");
    for(i = 0; i < 3; i++)
    {
        subvetor[i] = j;
        j++;
        printf("sub-V[%d]: %d, end: %d\n", i, subvetor[i], &subvetor[i]);
    }

    p = busca_subvetor(vetor, 9, subvetor, 3);

    for(i = 0; i < 9; i++)
    {
        if(p == &vetor[i])
        {
            j = i;
        }
    }

    printf("\nInicio da sequencia do Sub-etor comeca na variavel de endereco: %d do Vetor (V[%d])", p, j);

    return 0;
}