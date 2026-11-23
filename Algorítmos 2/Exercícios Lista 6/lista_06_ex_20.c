//20 – Faça um programa para consultar todos os produtos cujos nomes comecem pela
//letra M.

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
    char texto[250], caractere;
    int n = 0;
    struct Produtos pro1;

    fp = fopen("PRODUTOS.txt", "r");

    if(fp == NULL)
    {
        printf("Falha em abrir arquivo!\n");
        return 1;
    }

    printf("==Produtos cujos nomes comecam com M==\n");

    while(fgets(texto, sizeof(texto), fp) != NULL)
    {
        if(sscanf(texto, "%d;%199[^;];%f", &pro1.codigo, pro1.descricao, &pro1.preco) == 3)
        {
            caractere = pro1.descricao[0];

            if((caractere == 'M') || (caractere == 'm'))
            {
                printf("\n~=Produto %d=~\nCodigo do Produto: %d\n", n+1, pro1.codigo);
                printf("Descricao do produto: %s\nPreco do produto: R$%.2f\n", pro1.descricao, pro1.preco);
                n++;
            }
        }
    }

    if(n == 0)
    {
        printf("\nNenhum produto encontrado!\n");
    }

    fclose(fp);

    return 0;
}