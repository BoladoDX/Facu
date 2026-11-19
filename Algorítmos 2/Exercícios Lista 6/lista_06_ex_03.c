//3 - Faça um programa que inclua recebimentos no arquivo criado no Exercício 1,
//devendo verificar se o cliente já se encontra cadastrado.

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

struct Clientes
{
    int cod_cli;
    char nome[50];
    char endereco[100];
    char fone[20];
};

int main()
{
    FILE *fp_rec, *fp_cli;
    struct Recebimentos rec1;
    struct Clientes cli1;
    char texto[250];
    int n = 0;

    printf("== Adicionar Recebimentos ==\nDigite o numero do documento:\n");
    scanf("%d", &rec1.num_doc);
    printf("Digite o valor do documento (Ex: 45.99):\n");
    scanf("%f", &rec1.valor_doc);
    printf("Digite a data de emissao (Ex: 02 11 2007 [dia/mes/ano]):\n");
    scanf("%d %d %d", &rec1.data_emissao.dia, &rec1.data_emissao.mes, &rec1.data_emissao.ano);
    printf("Digite a data de vencimento (Ex: 10 12 2020 [dia/mes/ano]):\n");
    scanf("%d %d %d", &rec1.data_vencimento.dia, &rec1.data_vencimento.mes, &rec1.data_vencimento.ano);
    printf("Digite o codigo do cliente:\n");
    scanf("%d", &rec1.cod_cli);

    fp_cli = fopen("Clientes.txt", "r");

    if(fp_cli == NULL)
    {
        printf("Falha em abrir arquivo! (1)\n");
        return 1;
    }

    while(fgets(texto, sizeof(texto), fp_cli) != NULL)
    {
        if(sscanf(texto, "%d;%49[^;];%99[^;];%19[^\n]",
        &cli1.cod_cli, cli1.nome, cli1.endereco, cli1.fone) == 4) 
        {
            if(cli1.cod_cli == rec1.cod_cli)
            {
                n = 1;
                printf("Cliente encontrado!\n");
                break;
            }
        }
        //Aqui o sscanf lê o conteúdo de uma string e vai adicionando nas variáveis da estrutura.
        //O sscanf lê o conteúdo no formato cod_cli;nome;endereco;fone utilizando a mesma formatação
        //que utilizamos no exercício anterior ([^;] = leia tudo exceto ; e guarde na variável).
        //Aquela comparação ("...") == 4 está verificando se o formato de quatro campos existe naquela
        //linha, caso não exista, a linha é ignorada.
    }

    fclose(fp_cli);

    if(n == 0)
    {
        printf("Por favor, cadastre o cliente antes de prosseguir com o recebimento!\n");
        return 1;
    }

    fp_rec = fopen("Recebimentos.txt", "a");

    if(fp_rec == NULL)
    {
        printf("Falha em abrir arquivo! (2)\n");
        return 1;
    }

    fprintf(fp_rec, "%d;%.2f;%02d/%02d/%04d;%02d/%02d/%04d;%d\n", rec1.num_doc, rec1.valor_doc, rec1.data_emissao.dia,
    rec1.data_emissao.mes, rec1.data_emissao.ano, rec1.data_vencimento.dia,
    rec1.data_vencimento.mes, rec1.data_vencimento.ano, rec1.cod_cli);

    fclose(fp_rec);

    printf("Recebimento cadastrado com sucesso!\n");

    return 0;
}