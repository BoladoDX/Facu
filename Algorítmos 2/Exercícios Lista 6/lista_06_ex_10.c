//10 - Faça um programa que mostre todos os recebimentos com valor abaixo de um valor
//dado pelo usuário.

#include <stdio.h>
#include <string.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Recebimentos
{
    int num_doc;
    float valor_doc;
    struct Data data_emissao;
    struct Data data_vencimento;
    int cod_cli;
};

struct Clientes
{
    int cod_cli;
    char nome[50];
    char endereco[100];
    char fone[20];
};

int main()
{
    FILE *fp_cli, *fp_rec;
    char texto[250], texto2[250], nome_cliente[50];
    int n = 1;
    float valor_achar;
    struct Recebimentos rec1;
    struct Clientes cli1;

    printf("==Procurador de Recebimentos por Valor==\nDigite o valor (Ex: 99.99):\n");
    scanf("%f", &valor_achar);

    fp_rec = fopen("Recebimentos.txt", "r");

    if(fp_rec == NULL)
    {
        printf("Falha em abrir arquivo! (1)\n");
        return 1;
    }

    fp_cli = fopen("Clientes.txt", "r");

    if(fp_cli == NULL)
    {
        printf("Falha em abrir arquivo! (2)\n");
        fclose(fp_rec);
        return 1;
    }

    while(fgets(texto, sizeof(texto), fp_rec) != NULL)
    {  
        if(sscanf(texto, "%d;%f;%d/%d/%d;%d/%d/%d;%d", &rec1.num_doc, &rec1.valor_doc, &rec1.data_emissao.dia,
        &rec1.data_emissao.mes, &rec1.data_emissao.ano, &rec1.data_vencimento.dia, &rec1.data_vencimento.mes,
        &rec1.data_vencimento.ano, &rec1.cod_cli) == 9)
        {

            if(rec1.valor_doc < valor_achar)
            {
                strcpy(nome_cliente, "Nao encontrado"); 

                    rewind(fp_cli);

                    while(fgets(texto2, sizeof(texto2), fp_cli) != NULL)
                    {
                        if(sscanf(texto2, "%d;%49[^;];%99[^;];%19[^\n]",
                        &cli1.cod_cli, cli1.nome, cli1.endereco, cli1.fone) == 4) 
                        {
                            if(rec1.cod_cli == cli1.cod_cli)
                            {
                                strcpy(nome_cliente, cli1.nome);
                                break;
                            }
                        }

                    }
                if(n == 1)
                {
                    printf("==Recebimentos cujos valores estao abaixo de %.2f==", valor_achar);
                }
                printf("\n==%do Recebimento==\nNome do cliente: %s\n", n, nome_cliente);
                printf("Numero do documento: %d\nValor do documento: %.2f\n", rec1.num_doc, rec1.valor_doc);
                printf("Data de emissao: %02d/%02d/%04d\n", rec1.data_emissao.dia, rec1.data_emissao.mes, rec1.data_emissao.ano);
                printf("Data de vencimento: %02d/%02d/%04d\n", rec1.data_vencimento.dia,
                rec1.data_vencimento.mes, rec1.data_vencimento.ano);
                printf("Codigo do cliente: %d\n", rec1.cod_cli);
                n++;
            }
        }
    }

    fclose(fp_cli);
    fclose(fp_rec);

    if(n == 1)
    {
        printf("Nenhum recebimento encontrado abaixo do valor escolhido!\n");
    }

    return 0;
}