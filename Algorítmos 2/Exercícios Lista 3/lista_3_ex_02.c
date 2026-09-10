//Escreva uma função que receba um vetor de inteiros, seu tamanho e um número X
//(informado pelo usuário). A função deve buscar X no vetor e retornar um ponteiro para
//a primeira posição de memória onde X foi encontrado.
//-Se X não estiver no vetor, a função deve retornar NULL.
//-Apresente o resultado na main.

#include <stdio.h>

int* procura_valor(int *v, int tamanho, int x)
{
    int i = 0, *p;

    while(i < tamanho)
    {
        if(v[i] == x)
        {
            p = &v[i];
            return p;
        }
        i++;
    }

    printf("\nValor nao encontrado.\n");

    return NULL;
}

int main()
{
    int v[10], i = 0, n;
    int *p;

    for(i = 0; i < 10; i++)
    {
        v[i] = 1 + i;
    }

    printf("Digite um valor para ser procurado dentro do vetor (de 1 - 10):\n");
    scanf("%d", &n);

    p = procura_valor(v, 10, n);

    printf("//Pela funcao\nO endereco da variavel onde o valor foi encontrado: %d\nO valor dentro dela: %d\n", p, *p);
    printf("\n//Pela main\nO endereco da variavel onde o valor esta: %d\nO valor dentro dela: %d", &v[n - 1], v[n - 1]);

    return 0;
}