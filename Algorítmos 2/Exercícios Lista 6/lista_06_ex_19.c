//19 – Faça um programa para alterar os preços dos produtos em R$ 10,00, mas apenas os
//produtos que já custam mais de R$ 100,00.

#include <stdio.h>

struct Produtos
{
    int codigo;
    char descricao[200];
    float preco;
};

int main()
{
    FILE *fp, *fp_temp;
    char texto[250];
    int opcao = 0;
    float somador;
    struct Produtos pro1;

    printf("==Alterar preco dos produtos de valor acima de R$100.00 em R$10.00==\n");
    printf("1 - Adicionar R$10.00\n2 - Diminuir R$10.00\nx - Qualquer botao para sair\n");
    printf("Digite sua resposta:\n");
    scanf("%d", &opcao);

    if(opcao == 1)
    {
        somador = 10;
    }
    else if(opcao == 2)
    {
        somador = -10;
    }
    else
    {
        return 0;
    }

    fp = fopen("PRODUTOS.txt", "r");

    if(fp == NULL)
    {
        printf("Falha em abrir arquivo! (1)\n");
        return 1;
    }

    fp_temp = fopen("Temp.txt", "w");

    if(fp_temp == NULL)
    {
        printf("Falha em abrir arquivo! (2)\n");
        fclose(fp);
        return 1;
    }

    fprintf(fp_temp, "codigo;descricao;preco\n");

    while(fgets(texto, sizeof(texto), fp) != NULL)
    {
        if(sscanf(texto, "%d;%199[^;];%f", &pro1.codigo, pro1.descricao, &pro1.preco) == 3)
        {
            if(pro1.preco > 100)
            {
                pro1.preco += somador;
            }

            fprintf(fp_temp, "%d;%s;%.2f\n", pro1.codigo, pro1.descricao, pro1.preco);
        }
    }

    fclose(fp);
    fclose(fp_temp);

    remove("PRODUTOS.txt");
    rename("Temp.txt", "PRODUTOS.txt");

    printf("Precos ajustados com sucesso!\n");

    return 0;
}