//6 - Faça um programa que altere um recebimento de um cliente, ou seja, o usuário
//informa o número do documento e o número do cliente e faz as alterações desejadas.

#include <stdio.h>

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

int main()
{
    FILE *fp_rec, *fp_temp;
    char texto[250];
    int doc_mudar, cod_mudar;
    int cod_lido1, cod_lido2, n = 0;
    struct Recebimentos rec1;
    struct Recebimentos novo;

    printf("Digite o numero do documento a ser mudado:\n");
    scanf("%d", &doc_mudar);
    printf("Agora digite o codigo do cliente:\n");
    scanf("%d", &cod_mudar);

    fp_rec = fopen("Recebimentos.txt", "r");

    if(fp_rec == NULL)
    {
        printf("Falha em abrir arquivo! (1)\n");
        return 1;
    }

    while(fgets(texto, sizeof(texto), fp_rec) != NULL)
    {  
        cod_lido1 = -1;
        cod_lido2 = -1;

        sscanf(texto, "%d;%f;%d/%d/%d;%d/%d/%d;%d", &cod_lido1, &rec1.valor_doc, &rec1.data_emissao.dia,
        &rec1.data_emissao.mes, &rec1.data_emissao.ano, &rec1.data_vencimento.dia, &rec1.data_vencimento.mes,
        &rec1.data_vencimento.ano, &cod_lido2);

        if((cod_lido1 == doc_mudar) && (cod_lido2 == cod_mudar))
        {
           printf("Documento de cliente encontrado!\n");
           n = 1;
           break;
        }
    }

    if(n == 0)
    {
        printf("Documento de cliente nao encontrado!\n");
        fclose(fp_rec);
        return 1;
    }

    rewind(fp_rec);

    printf("==Mudanca de Recebimento==\nDigite o novo valor do documento (Ex: 99.99):\n");
    scanf("%f", &novo.valor_doc);
    printf("Digite a nova data de emissao (Ex: 02 11 2007):\n");
    scanf("%d %d %d", &novo.data_emissao.dia, &novo.data_emissao.mes, &novo.data_emissao.ano);
    printf("Digite a nova data de vencimento (Ex: 23 12 2009):\n");
    scanf("%d %d %d", &novo.data_vencimento.dia, &novo.data_vencimento.mes, &novo.data_vencimento.ano);

    fp_temp = fopen("Temp.txt", "w");

    if(fp_temp == NULL)
    {
        printf("Falha em abrir arquivo! (2)\n");
        fclose(fp_rec);
        return 1;
    }

    while(fgets(texto, sizeof(texto), fp_rec) != NULL)
    {  
        cod_lido1 = -1;
        cod_lido2 = -1;

        sscanf(texto, "%d;%f;%d/%d/%d;%d/%d/%d;%d", &cod_lido1, &rec1.valor_doc, &rec1.data_emissao.dia,
        &rec1.data_emissao.mes, &rec1.data_emissao.ano, &rec1.data_vencimento.dia, &rec1.data_vencimento.mes,
        &rec1.data_vencimento.ano, &cod_lido2);

        if((cod_lido1 == doc_mudar) && (cod_lido2 == cod_mudar))
        {
            fprintf(fp_temp, "%d;%.2f;%02d/%02d/%04d;%02d/%02d/%04d;%d\n", doc_mudar, novo.valor_doc,
            novo.data_emissao.dia, novo.data_emissao.mes, novo.data_emissao.ano, novo.data_vencimento.dia,
            novo.data_vencimento.mes, novo.data_vencimento.ano, cod_mudar);
        }
        else
        {
            fputs(texto, fp_temp);
        }
    }

    fclose(fp_rec);
    fclose(fp_temp);

    remove("Recebimentos.txt");
    rename("Temp.txt", "Recebimentos.txt");

    printf("Recebimento alterado com sucesso!\n");

    return 0;
}