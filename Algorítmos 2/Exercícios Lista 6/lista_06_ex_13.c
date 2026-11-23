//13 - Faça um programa para:
//-Cadastrar as estações climáticas, por exemplo, primavera-verão e outono-inverno;
//-Cadastrar os estilistas;
//-Cadastrar as roupas. Lembre-se de que estilista e estação devem ter sido previamente
//cadastrados;
//-Mostrar um relatório de todas as roupas de uma determinada estação, informando,
//inclusive, o nome do estilista que a desenhou.

#include <stdio.h>
#include <string.h>

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
    int opcao, achar_estil = 0, achar_estac = 0, estac_roupas, n = 1;
    char texto[250], nome_encontrado[50];
    struct Estilista estil1;
    struct Roupa roupa1;
    struct Estacao estac1;

    while(1)
    {
        printf("==Opcoes de Cadastro==\n1 - Cadastro de Estilista\n2 - Cadastro de Estacao\n");
        printf("3 - Cadastro de Roupa\n4- Relatorio de roupas\n0 - Encerrar Programa\nDigite a sua opcao:\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
            {
                fp_estil = fopen("Estilista.txt", "a");

                if(fp_estil == NULL)
                {
                    printf("Falha em abrir arquivo! (1)\n");
                    return 1;
                }

                printf("\n==Cadastro de Estilista==\nDigite o codigo do estilista:\n");
                scanf("%d", &estil1.cod_estil);
                printf("Digite o nome do estilista:\n");
                scanf(" %49[^\n]", estil1.nome);
                printf("Digite o salario (Ex: 1999.99):\n");
                scanf("%f", &estil1.salario);

                fprintf(fp_estil, "%d;%s;%.2f\n", estil1.cod_estil, estil1.nome, estil1.salario);

                fclose(fp_estil);

                printf("Estilista cadastrado com sucesso!\n");

                break;
            }

            case 2:
            {
                fp_estac = fopen("Estacao.txt", "a");

                if(fp_estac == NULL)
                {
                    printf("Falha em abrir arquivo! (2)\n");
                    return 1;
                }

                printf("\n==Cadastro de Estacao==\nDigite o codigo da estacao:\n");
                scanf("%d", &estac1.cod_estac);
                printf("Digite o nome da estacao (Ex: Primavera):\n");
                scanf(" %49[^\n]", estac1.nome_est);

                fprintf(fp_estac, "%d;%s\n", estac1.cod_estac, estac1.nome_est);

                fclose(fp_estac);

                printf("Estacao cadastrada com sucesso!\n");

                break;
            }

            case 3:
            {
                fp_roupa = fopen("Roupa.txt", "a");

                if(fp_roupa == NULL)
                {
                    printf("Falha em abrir arquivo! (3)\n");
                    return 1;
                }

                printf("\n==Cadastro de Roupa==\nDigite o codigo da roupa:\n");
                scanf("%d", &roupa1.cod_rou);
                printf("Digite a descricao da roupa:\n");
                scanf(" %199[^\n]", roupa1.descricao);
                printf("Digite o codigo do estilista:\n");
                scanf("%d", &roupa1.cod_estil);

                fp_estil = fopen("Estilista.txt", "r");

                if(fp_estil == NULL)
                {
                    printf("Falha em abrir arquivo! (4)\n");
                    fclose(fp_roupa);
                    return 1;
                }

                while(fgets(texto, sizeof(texto), fp_estil) != NULL)
                {
                    if(sscanf(texto, "%d", &estil1.cod_estil) == 1)
                    {

                        if(estil1.cod_estil == roupa1.cod_estil)
                        {
                            printf("Estilista encontrado!\n");
                            achar_estil = 1;
                            break;
                        }
                    }
                }

                if(achar_estil == 0)
                {
                    printf("Estilista nao encontrado!\n");
                    fclose(fp_estil);
                    fclose(fp_roupa);
                    achar_estil = 0;
                    achar_estac = 0;
                    break;
                }

                fclose(fp_estil);

                printf("Digite o codigo da estacao:\n");
                scanf("%d", &roupa1.cod_estac);

                fp_estac = fopen("Estacao.txt", "r");

                if(fp_estac == NULL)
                {
                    printf("Falha em abrir arquivo! (5)\n");
                    fclose(fp_roupa);
                    return 1;
                }

                while(fgets(texto, sizeof(texto), fp_estac) != NULL)
                {
                    if(sscanf(texto, "%d", &estac1.cod_estac) == 1)
                    {
                        if(estac1.cod_estac == roupa1.cod_estac)
                        {
                            printf("Estacao encontrada!\n");
                            achar_estac = 1;
                            break;
                        }
                    }
                }

                if(achar_estac == 0)
                {
                    printf("Estacao nao encontrada!\n");
                    fclose(fp_estac);
                    fclose(fp_roupa);
                    achar_estil = 0;
                    achar_estac = 0;
                    break;
                }

                fclose(fp_estac);

                printf("Digite o ano da roupa:\n");
                scanf("%d", &roupa1.ano);

                fprintf(fp_roupa, "%d;%s;%d;%d;%d\n", roupa1.cod_rou, roupa1.descricao,
                roupa1.cod_estil, roupa1.cod_estac, roupa1.ano);

                fclose(fp_roupa);

                printf("Roupa cadastrada com sucesso!\n");

                achar_estil = 0;
                achar_estac = 0;

                break;
            }

            case 4:
            {
                fp_roupa = fopen("Roupa.txt", "r");

                if(fp_roupa == NULL)
                {
                    printf("Falha em abrir arquivo! (6)\n");
                    return 1;
                }

                fp_estil = fopen("Estilista.txt", "r");

                if(fp_estil == NULL)
                {
                    printf("Falha em abrir arquivo! (7)\n");
                    fclose(fp_roupa);
                    return 1;
                }

                printf("\n==Relatorio de Roupa==\nDigite o codigo da estacao:\n");
                scanf("%d", &estac_roupas);

                while(fgets(texto, sizeof(texto), fp_roupa) != NULL)
                {
                    if(sscanf(texto, "%d;%199[^;];%d;%d;%d", &roupa1.cod_rou, roupa1.descricao,
                    &roupa1.cod_estil, &roupa1.cod_estac, &roupa1.ano) == 5)
                    {
                        if(roupa1.cod_estac == estac_roupas)
                        {
                            printf("==%da Roupa encontrada==\nCodigo da roupa: %d\n", n, roupa1.cod_rou);
                            printf("Descricao da roupa: '%s'\n", roupa1.descricao);
                            printf("Codigo do estilista: %d\n", roupa1.cod_estil);

                            rewind(fp_estil);
                            strcpy(nome_encontrado, "Nome do estilista nao encontrado");

                            while(fgets(texto, sizeof(texto), fp_estil) != NULL)
                            {
                                if(sscanf(texto, "%d;%49[^;];%f", &estil1.cod_estil, estil1.nome,
                                &estil1.salario) == 3)
                                {
                                    if(estil1.cod_estil == roupa1.cod_estil)
                                    {
                                        strcpy(nome_encontrado, estil1.nome);
                                        break;
                                    }
                                }
                            }

                            printf("Nome do estilista: %s\n", nome_encontrado);
                            printf("Codigo da estacao: %d\nAno da roupa: %d\n", roupa1.cod_estac, roupa1.ano);
                            n++;
                        }
                    }
                }

                if(n == 1)
                {
                    printf("Nenhuma roupa encontrada pelo codigo de estacao fornecido!\n");
                }

                n = 1;

                fclose(fp_roupa);
                fclose(fp_estil);

                break;
            }

            case 0:
            {
                printf("Encerrando programa...\n");
                return 0;
            }

            default:
            {
                printf("Digite uma opcao valida!\n");
                break;
            }
        }
    }
}