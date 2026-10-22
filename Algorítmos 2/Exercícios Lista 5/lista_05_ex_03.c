//Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o
//endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e
//retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa
//estrutura. Solicite também que o usuário digite os dados desse vetor dentro da função.

#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    char nome[60];
    int idade;
    char endereco[100];
};

int* vetor(int n)
{
    int *p, i = 0;

    struct cadastro pessoa[n];

    p = calloc(n, struct cadastro);

    while(i < n)
    {
        printf("Digite o nome da pessoa %d:\n ");
    }

    p = pessoa[0];

    return p;
}

int main()
{

    return 0;
}