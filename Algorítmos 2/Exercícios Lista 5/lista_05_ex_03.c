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

    p = calloc(n, sizeof(struct cadastro));

    if(p == NULL)
    {
        printf("Erro ao alocar memória!\n");
        return 0;
    }

    while(i < n)
    {
        printf("Digite o nome da %da pessoa:\n", i+1);
        scanf("%s", &pessoa[n].nome);

        printf("Digite a idade da %da pessoa:\n", i+1);
        scanf("%d", &pessoa[n].idade);

        printf("Digite o endereco da %da pessoa:\n", i+1);
        scanf("%s", &pessoa[n].endereco);

        i++;
    }

    free(p);

    return p;
}

int main()
{
    int n, *p;

    printf("Digite quantas pessoas vai cadastrar:\n");
    scanf("%d", &n);

    p = vetor(n);

    printf("\nInformacoes das pessoas cadastradas (na main):\n");
    for(int i = 0; i < n; i++)
    {
        printf("Nome da %da pessoa: %s\n", i+1, *p);
        p++;
        
        printf("Idade da %da pessoa: %d\n", i+1, *p);
        p++;

        printf("Endereco da %da pessoa: %s\n", i+1, *p);
        p++;
    }

    return 0;
}