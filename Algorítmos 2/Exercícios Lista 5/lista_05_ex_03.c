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

struct cadastro* vetor(int n)
{
    struct cadastro *p;
    struct cadastro pessoa[n];

    p = calloc(n, sizeof(struct cadastro));

    if(p == NULL)
    {
        printf("Erro ao alocar memória!\n");
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        printf("Digite o nome da %da pessoa:\n", i+1);
        scanf("%s", &pessoa[n].nome);

        printf("Digite a idade da %da pessoa:\n", i+1);
        scanf("%d", &pessoa[n].idade);

        printf("Digite o endereco da %da pessoa:\n", i+1);
        scanf("%s", &pessoa[n].endereco);
    }

    p = &pessoa[0];

    return p;
}

int main()
{
    int n;
    struct cadastro *p;

    printf("Digite quantas pessoas vai cadastrar:\n");
    scanf("%d", &n);

    p = vetor(n);

    printf("\nInformacoes das pessoas cadastradas (na main):\n");
    for(int i = 0; i < n; i++)
    {
        printf("Nome da %da pessoa: %s\n", i+1, p[i].nome);
        printf("Idade da %da pessoa: %d\n", i+1, p[i].idade);
        printf("Endereco da %da pessoa: %s\n", i+1, p[i].endereco);

    }

    free(p);

    return 0;
}