// Implemente um algoritmo de ordenação simples (como Bubble Sort) para um vetor
//de inteiros usando ponteiros.
//-A lógica que inverte dois elementos de lugar não pode estar dentro da função de
//ordenação. Crie uma função auxiliar void swap(int *a, int *b).
//-O algoritmo principal deve percorrer o vetor usando ponteiros, e sempre que
//dois valores precisarem ser invertidos, seus endereços devem ser enviados para a
//função swap

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

    return;
}

int main()
{
    srand(time(NULL));

    int V[9];
    int *p = &V[0];
    int *p2 = &V[1];
    int i, j;
    
    printf("Vetor original:\n");
    for(i = 0; i < 9; i++)
    {
        V[i] = rand() % 10;
        printf("V[%d]: %d\n", i, V[i]);
    }

    for(j = 0; j < 10; j++)
    {
        for(i = 0; i < 8; i++)
        {
            if(*p >= *p2)
            {
                swap(p, p2);
            }
            p++;
            p2++;
        }
        p = &V[0];
        p2 = &V[1];
    }

    printf("\nNovo Vetor:\n");
    for(i = 0; i < 9; i++)
    {
        printf("V[%d]: %d\n", i, V[i]);
    }
    
    return 0;
}