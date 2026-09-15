//Crie uma função que varra um vetor de inteiros uma única vez e retorne três
//informações simultaneamente (Devem ser apresentadas na Main).
//-Assinatura: void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max,
//float *media);
//-O main deve passar um vetor e os endereços das variáveis onde os resultados
//serão armazenados. Toda a varredura do vetor deve ser feita via aritmética de
//ponteiros (*(vetor + i) ou avançando um ponteiro auxiliar)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media)
{
    int i = 0;

    *min = 10;
    *max = 0;
    *media = 0;

    for(i = 0; i < tamanho; i++)
    {
        if(*vetor <= *min)
        {
            *min = *vetor;
        }
        if(*vetor >= *max)
        {
            *max = *vetor;
        }

        *media += *vetor;

        vetor++;
    }

    *media /= tamanho;

    return;
}

int main()
{
    srand(time(NULL));

    int V[9];
    int min, max;
    float media;

    printf("Valores do vetor:\n");
    for(int i = 0; i < 9; i++)
    {
        V[i] = rand() % 10;
        printf("V[%d]: %d, end: %d\n", i, V[i], &V[i]);
    }

    extrair_estatisticas(V, 9, &min, &max, &media);

    printf("\nMenor valor: %d\nMaior valor: %d\nMedia dos valores: %.2f\n", min, max, media);

    return 0;
}