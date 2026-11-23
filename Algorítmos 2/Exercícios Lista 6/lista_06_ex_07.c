//7 - Faça um programa que mostre todos os recebimentos com data de vencimento
//dentro de um período qualquer. Não esqueça de mostrar também o nome do cliente e o
//total de dias em atraso. Quando não houver atraso, mostrar zero.

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

int valor_absoluto(int dia, int mes, int ano)
{
    int dias_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a = ano - 1, total, i;

    //dias dos anos anteriores, somando os dias extras dos bissextos
    total = (a * 365) + (a / 4) - (a / 100) + (a / 400);

    //dias dos meses completos do ano atual
    for(i = 0; i < mes - 1; i++)
    {
        total += dias_mes[i];
    }

    //se o ano atual for bissexto e ja passou de fevereiro, soma o 29/02
    if((mes > 2) && (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)))
    {
        total++;
    }

    return total + dia;
}

int main()
{
    FILE *fp_rec, *fp_cli;
    char texto[250], texto2[250], nome_rec[50];
    struct Data inicio;
    struct Data fim;
    int inicio_abso, fim_abso, venc_abso, dias_atraso = 0, aux, n = 1;
    struct Recebimentos rec1;
    struct Clientes cli1;

    printf("==Verificar Recebimentos por Periodo==\nDigite a data inicial (Ex: 02 11 2007):\n");
    scanf("%d %d %d", &inicio.dia, &inicio.mes, &inicio.ano);
    printf("Agora digite a data final (Ex: 23 12 2009):\n");
    scanf("%d %d %d", &fim.dia, &fim.mes, &fim.ano);

    inicio_abso = valor_absoluto(inicio.dia, inicio.mes, inicio.ano);
    fim_abso = valor_absoluto(fim.dia, fim.mes, fim.ano);

    if(inicio_abso > fim_abso)
    {
        aux = inicio_abso;
        inicio_abso = fim_abso;
        fim_abso = aux;
    }

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

    //Primeiro laço. Ele scaneia cada linha dos recebimentos, caso a data esteja dentro do período, ele entra
    //em um if.
    while(fgets(texto, sizeof(texto), fp_rec) != NULL)
    {  
        if(sscanf(texto, "%d;%f;%d/%d/%d;%d/%d/%d;%d", &rec1.num_doc, &rec1.valor_doc, &rec1.data_emissao.dia,
        &rec1.data_emissao.mes, &rec1.data_emissao.ano, &rec1.data_vencimento.dia, &rec1.data_vencimento.mes,
        &rec1.data_vencimento.ano, &rec1.cod_cli) == 9)
        {

            venc_abso = valor_absoluto(rec1.data_vencimento.dia, rec1.data_vencimento.mes, rec1.data_vencimento.ano);

            if((venc_abso >= inicio_abso) && (venc_abso <= fim_abso))
            {
                strcpy(nome_rec, "Nao encontrado"); //Caso o código do cliente no recebimento não esteja
                //no Clientes.txt, o strcpy mais abaixo não roda, então fazemos isso para evitar que
                //nome_rec fique com lixo de memória.

                rewind(fp_cli);

                while(fgets(texto2, sizeof(texto2), fp_cli) != NULL)
                {
                    if(sscanf(texto2, "%d;%49[^;];%99[^;];%19[^\n]",
                    &cli1.cod_cli, cli1.nome, cli1.endereco, cli1.fone) == 4) 
                    {
                        if(rec1.cod_cli == cli1.cod_cli)
                        {
                            strcpy(nome_rec, cli1.nome);
                            break; //após achar o nome do cliente, break para não continuar
                            //scaneando o arquivo à toa.
                        }
                    }

                }
                //Segundo laço. Esse é responsável por scanear cada linha dos clientes para achar o nome
                //que bate com o código do cliente nos recebimentos.

                dias_atraso = fim_abso - venc_abso;
                printf("\n==%do Recebimento==\nNome do cliente: %s\n", n, nome_rec);
                printf("Numero do documento: %d\nValor do documento: %.2f\n", rec1.num_doc, rec1.valor_doc);
                printf("Data de emissao: %02d/%02d/%04d\n", rec1.data_emissao.dia, rec1.data_emissao.mes, rec1.data_emissao.ano);
                printf("Data de vencimento: %02d/%02d/%04d\n", rec1.data_vencimento.dia,
                rec1.data_vencimento.mes, rec1.data_vencimento.ano);
                printf("Codigo do cliente: %d\n", rec1.cod_cli);
                printf("Dias em atraso ate a data final do periodo: %d\n", dias_atraso);
                n++;
            }
        }
    }

    if(n == 1)
    {
        printf("Nenhum recebimento encontrado dentro desse periodo!\n");
    }

    fclose(fp_cli);
    fclose(fp_rec);

    return 0;
}