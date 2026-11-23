//17 - Faça um programa para consultar a descrição de todos os produtos que possuem
//preço superior a R$ 500,00.

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
    char texto[250];
    int n = 0;
    struct Produtos pro1;

    fp = fopen("PRODUTOS.txt", "r");

    if(fp == NULL)
    {
        printf("Falha em abrir arquivo!\n");
        return 1;
    }

    printf("==Produtos de preco superior a R$500.00==\n");

    while(fgets(texto, sizeof(texto), fp) != NULL)
    {
        if(sscanf(texto, "%d;%199[^;];%f", &pro1.codigo, pro1.descricao, &pro1.preco) == 3)
        {
            if(pro1.preco > 500)
            {
                printf("\nProduto %d:\nCodigo do produto: %d\n", n+1, pro1.codigo);
                printf("Descricao do produto: %s\nPreco do produto: R$%.2f\n", pro1.descricao, pro1.preco);
                n++;
            }
        }
    }

    if(n == 0)
    {
        printf("Nenhum produto encontrado com preco superior a R$500.00!\n");
    }

    fclose(fp);

    return 0;
}