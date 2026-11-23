//15 - Faça um programa para criar um arquivo chamado PRODUTOS.txt, onde cada
//registro será composto pelos seguintes campos: codigo, descricao e preco.

#include <stdio.h>

struct Produtos
{
    int codigo;
    char descricao[200];
    float preco;
};

int main()
{
    FILE *fp;

    fp = fopen("PRODUTOS.txt", "w");

    if(fp == NULL)
    {
        printf("Falha em criar arquivo!\n");
        return 1;
    }

    fprintf(fp, "codigo;descricao;preco\n");

    fclose(fp);

    printf("Arquivo PRODUTOS.txt criado com sucesso!\n");

    return 0;
}