//5 - Faça um programa que altere o cadastro de clientes do Exercício 1. O usuário deve
//informar o código do cliente que será alterado.

#include <stdio.h>

struct Clientes
{
    int cod_cli;
    char nome[50];
    char endereco[100];
    char fone[20];
};

int main()
{
    FILE *fp_cli, *fp_temp;
    char texto[250];
    int cli_mudar, cod_lido, n = 0;
    struct Clientes novo;
    struct Clientes cli1;

    printf("Digite o codigo do cliente a ter seu cadastro alterado:\n");
    scanf("%d", &cli_mudar);

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
            if(cli1.cod_cli == cli_mudar)
            {
                n = 1;
                printf("Cliente encontrado!\n");
                break;
            }
        }
    }

    if(n == 0)
    {
        printf("Cliente nao encontrado para mudanca de cadastro!\n");
        fclose(fp_cli);
        return 1;
    }

    printf("==Mudanca de Cadastro==\nDigite o novo nome:\n");
    scanf(" %49[^\n]", novo.nome);
    printf("Digite o novo endereco:\n");
    scanf(" %99[^\n]", novo.endereco);
    printf("Digite o novo numero de telefone:\n");
    scanf(" %19[^\n]", novo.fone);
    //Perceba que, ao scanear as novas strings, é necessário dar um espaço no inicio do scan,
    //pois lá no primeiro scan do cli_mudar, ele deixa o enter (\n) no buffer, fazendo com que nos próximos
    //scans o primeiro caractere seja o \n. Isso significa que o formato de %[^\n] (leia tudo antes do \n)
    //falha em ler nada. Por isso a barra de espaço no inicio, para ignorar
    //o \n inicial.

    rewind(fp_cli); //poderia ser "fseek(fp_cli, 0, SEEK_SET);", funcionaria igual.

    fp_temp = fopen("Temp.txt", "w");

    if(fp_temp == NULL)
    {
        printf("Falha em abrir arquivo! (2)\n");
        fclose(fp_cli);
        return 1;
    }

    while(fgets(texto, sizeof(texto), fp_cli) != NULL)
    {  
        cod_lido = -1; 

        sscanf(texto, "%d", &cod_lido);

        if(cod_lido != cli_mudar)
        {
           fputs(texto, fp_temp);
        }
        else
        {
            fprintf(fp_temp, "%d;%s;%s;%s\n", cli_mudar, novo.nome, novo.endereco, novo.fone);
        }
    }

    fclose(fp_cli);
    fclose(fp_temp);

    remove("Clientes.txt");
    rename("Temp.txt", "Clientes.txt");

    printf("Mudanca de cadastro realizada com sucesso!\n");

    return 0;
}