//18 – Faça um programa para alterar os preços de todos os produtos em 15%.

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
    float multiplicador;
    struct Produtos pro1;

    printf("==Alterar preco dos produtos em 15 por cento==\n");
    printf("1 - Adicionar 15 por cento\n2 - Diminuir 15 por cento\nx - Qualquer botao para sair\n");
    printf("Digite sua resposta:\n");
    scanf("%d", &opcao);

    if(opcao == 1)
    {
        multiplicador = 1.15;
    }
    else if(opcao == 2)
    {
        multiplicador = 0.85;
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
            pro1.preco *= multiplicador;

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