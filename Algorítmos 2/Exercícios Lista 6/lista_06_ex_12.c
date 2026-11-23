//12 - Faça um programa para criar os arquivos a seguir:
//-Estilista (código do estilista, nome do estilista, salário)
//-Roupa (código da roupa, descrição da roupa, código do estilista, código da
//estação, ano)
//-Estação (código da estação, nome da estação)

#include <stdio.h>

struct Estilista
{
    int cod_estil;
    char nome[50];
    float salario;
};

struct Roupa
{
    int cod_rou;
    char descricao[200];
    int cod_estil;
    int cod_estac;
    int ano;
};

struct Estacao
{
    int cod_estac;
    char nome_est[50];
};

int main()
{
    FILE *fp_estil, *fp_roupa, *fp_estac;

    //Criação do Estilista.txt
    fp_estil = fopen("Estilista.txt", "w");

    if(fp_estil == NULL)
    {
        printf("Falha em abrir arquivo! (1)\n");
        return 1;
    }

    fprintf(fp_estil, "codigo_estilista;nome_estilista;salario\n");

    fclose(fp_estil);

    //Criação do Roupa.txt
    fp_roupa = fopen("Roupa.txt", "w");

    if(fp_roupa == NULL)
    {
        printf("Falha em abrir arquivo! (2)\n");
        return 1;
    }

    fprintf(fp_roupa, "codigo_roupa;descricao_roupa;codigo_estilista;codigo_estacao;ano\n");

    fclose(fp_roupa);

    //Criação do Estacao.txt
    fp_estac = fopen("Estacao.txt", "w");

    if(fp_estac == NULL)
    {
        printf("Falha em abrir arquivo! (3)\n");
        return 1;
    }

    fprintf(fp_estac, "codigo_estacao;nome_estacao\n");

    fclose(fp_estac);

    printf("Arquivos criados com sucesso!\n");

    return 0;
}