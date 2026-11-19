//2 - Faça um programa para cadastrar clientes no arquivo criado no Exercício 1.

#include <stdio.h>

struct Clientes
{
    int cod_cli;
    char nome[50];
    char endereco[100];
    char fone[20];
};

int main()
{
    FILE *fp;
    struct Clientes cliente1;

    printf("== Cadastro de Cliente ==\nDigite o codigo do cliente:\n");
    scanf("%d", &cliente1.cod_cli);
    printf("Digite o nome do cliente:\n");
    scanf(" %49[^\n]", cliente1.nome); //Escrever % desse jeito permite que o programa leia todo o conteúdo
    //escrito pelo usuario, nesse caso, até 50 caracteres (começa no 0, por isso 49).
    //%[^\n] significa "leia tudo, exceto \n", por isso ele aceita espaços.
    printf("Digite o endereco do cliente:\n");
    scanf(" %99[^\n]", cliente1.endereco);
    printf("Digite o numero de telefone do cliente:\n");
    scanf(" %19[^\n]", cliente1.fone);

    fp = fopen("Clientes.txt", "a");

    if(fp == NULL)
    {
        printf("Falha em abrir arquivo!\n");
        return 1;
    }

    fprintf(fp, "%d;%s;%s;%s\n", cliente1.cod_cli, cliente1.nome, cliente1.endereco, cliente1.fone);

    fclose(fp);

    printf("Cliente cadastrado com sucesso!\n");

    return 0;
}