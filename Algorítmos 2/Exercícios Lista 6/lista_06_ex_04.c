//4 - Faça um programa que exclua clientes e, consequentemente, todos os seus
//recebimentos, dos arquivos criados no Exercício l.

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
    FILE *fp_cli, *fp_rec, *fp_temp;
    char texto[250];
    int cod_apagar, cod_lido, achou_cli = 0, achou_rec = 0;
    struct Recebimentos rec1;

    printf("Digite o codigo do cliente a ser excluido do sistema:\n");
    scanf("%d", &cod_apagar);

    fp_cli = fopen("Clientes.txt", "r");

    if(fp_cli == NULL)
    {
        printf("Falha em abrir arquivo! (1)\n");
        return 1;
    }

    fp_temp = fopen("Temp.txt", "w");

    if(fp_temp == NULL)
    {
        printf("Falha em abrir arquivo! (2)\n");
        fclose(fp_cli);
        return 1;
    }

    //Excluindo do arquivo Clientes.txt
    while(fgets(texto, sizeof(texto), fp_cli) != NULL)
    {  
        cod_lido = -1; //caso o sscanf falhe, o cod_lido fica com um valor invalido,
        //para não interferir na reescrita

        sscanf(texto, "%d", &cod_lido); //Enquanto o laço varre o arquivo, a cada linha que passa
        //ele adiciona o cod_cli (%d) ao cod_lido.

        if(cod_lido != cod_apagar)
        {
           fputs(texto, fp_temp);
        }
        else
        {
            achou_cli = 1;
        }
        //E caso esse cod_lido for igual ao cod_apagar (aquele que é escolhido para ser excluído),
        //ele simplesmente pula a escrita dessa linha, pois esse if só permite escrever a linha em 
        //que cod_lido != cod_apagar
    }
    
    fclose(fp_cli);
    fclose(fp_temp);

    if(achou_cli == 0)
    {
        printf("Cliente nao encontrado!\n");
        remove("Temp.txt");
        return 1;
    }

    remove("Clientes.txt");
    rename("Temp.txt", "Clientes.txt");

    fp_rec = fopen("Recebimentos.txt", "r");

    if(fp_rec == NULL)
    {
        printf("Falha em abrir arquivo! (3)\n");
        return 1;
    }

    fp_temp = fopen("Temp.txt", "w");

    if(fp_temp == NULL)
    {
        printf("Falha em abrir arquivo! (4)\n");
        fclose(fp_rec);
        return 1;
    }

    //Excluindo do arquivo Recebimentos.txt
    while(fgets(texto, sizeof(texto), fp_rec) != NULL)
    {  
        cod_lido = -1;

        sscanf(texto, "%d;%f;%d/%d/%d;%d/%d/%d;%d", &rec1.num_doc, &rec1.valor_doc, &rec1.data_emissao.dia,
        &rec1.data_emissao.mes, &rec1.data_emissao.ano, &rec1.data_vencimento.dia, &rec1.data_vencimento.mes,
        &rec1.data_vencimento.ano, &cod_lido);
        //Mesma lógica do laço de repetição anterior, exceto que aqui o cod_cli fica na última varriável da
        //linha ao invés da primeira, fazendo com que precisemos armazenar as anteriores primeiro.

        if(cod_lido != cod_apagar)
        {
           fputs(texto, fp_temp);
        }
        else
        {
            achou_rec = 1;
        }
    }

    fclose(fp_rec);
    fclose(fp_temp);

    remove("Recebimentos.txt");
    rename("Temp.txt", "Recebimentos.txt");

    if(achou_rec == 0)
    {
        printf("Cliente nao possuia recebimentos!\n");
    }

    printf("Cliente excluido do sistema com sucesso!\n");

    return 0;
}