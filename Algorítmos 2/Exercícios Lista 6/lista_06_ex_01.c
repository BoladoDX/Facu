//1 - Faça um programa para criar os arquivos a seguir:
//Clientes: Cod_Cli, Nome, Endereco, Fone
//Recebimentos: Num_doc, Valor_doc, Data_Emissao, Data_Vencimento, Cod_Cli.

#include <stdio.h>

int main()
{
    FILE *fp, *fp2;

    fp = fopen("Clientes.txt", "w");

    fp2 = fopen("Recebimentos.txt", "w");

    if((fp == NULL) || (fp2 == NULL))
    {
        printf("Falha em abrir os arquivos.\n");
        if(fp != NULL) fclose(fp);
        if(fp2 != NULL) fclose(fp2);
        fclose(fp2);
        return 1;
    }

    fprintf(fp, "Cod_Cli;Nome;Endereco;Fone\n");

    fprintf(fp2, "Num_doc;Valor_doc;Data_Emissao;Dara_Vencimento;Cod_Cli\n");

    fclose(fp);

    fclose(fp2);

    printf("Arquivos criados com sucesso!\n");

    return 0;
}