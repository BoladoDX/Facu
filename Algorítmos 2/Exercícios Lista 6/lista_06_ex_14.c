//14 - Faça um programa que apresente o seguinte menu de opções:
//1. Criar
//2. Incluir
//3. Sair
//Digite a opção desejada
//Na opcão 1: criar um arquivo com os campos: numero, nome, nota1 e nota2.
//Na opção 2: incluir todos os dados digitados, podendo haver repetição. No final da
//inclusão após pressionar ENTER o programa deve mostrar todos os registros
//cadastrados, calcular e mostrar a média das notas de cada registro.

#include <stdio.h>

struct Info
{
    int numero;
    char nome[50];
    float nota1;
    float nota2;
};

int main()
{
    FILE *fp;
    int opcao1, opcao2 = 0;
    int n = 0, i = 1, j = 0, k = 0;
    float media;
    char texto[250];
    struct Info info1;

    while(1)
    {
        printf("\n==Menu de Opcoes==\n1 - Criar\n2 - Incluir\n3 - Sair\nDigite a opcao desejada:\n");
        scanf("%d", &opcao1);

        switch(opcao1)
        {
            case 1:
            {
                fp = fopen("Info.txt", "w");

                if(fp == NULL)
                {
                    printf("Falha em abrir arquivo! (1)\n");
                    return 1;
                }

                fprintf(fp, "numero;nome;nota1;nota2\n");

                fclose(fp);

                if(n != 1)
                {
                    printf("Observacao: caso opte pela opcao 1 - Criar novamente, o arquivo anterior sera apagado e substituido.\n");
                }

                n = 1;

                printf("Arquivo criado com sucesso!\n");

                break;
            }

            case 2:
            {
                i = 1;

                do
                {
                    printf("==Menu de Incluir==\n1 - Incluir dados\n2 - Mostrar registros cadastrados\n3 - Voltar ao menu principal\nDigite sua opcao:\n");
                    scanf("%d", &opcao2);

                    j = 0;
                    k = 0;

                    switch(opcao2)
                    {
                        case 1:
                        {
                            fp = fopen("Info.txt", "a");

                            if(fp == NULL)
                            {
                                printf("Falha em abrir arquivo! (2)\n");
                                return 1;
                            }

                            printf("\n==%da Inclusao de Dados==\nDigite o numero:\n", i);
                            scanf("%d", &info1.numero);
                            printf("Digite o nome:\n");
                            scanf(" %49[^\n]", info1.nome);
                            printf("Digite a primeira e segunda nota respectivamente (Ex: 6.0 8.5):\n");
                            scanf("%f %f", &info1.nota1, &info1.nota2);

                            fprintf(fp, "%d;%s;%.2f;%.2f\n", info1.numero, info1.nome, info1.nota1, info1.nota2);

                            fclose(fp);

                            printf("%d Inclusao realizada com sucesso!\n", i);

                            i++;

                            break;
                        }

                        case 2:
                        {
                            fp = fopen("Info.txt", "r");

                            if(fp == NULL)
                            {
                                printf("Falha em abrir arquivo! (3)\n");
                                return 1;
                            }

                            while(fgets(texto, sizeof(texto), fp) != NULL)
                            {
                                if(sscanf(texto, "%d;%49[^;];%f;%f", &info1.numero, info1.nome, &info1.nota1,
                                &info1.nota2) == 4)
                                {
                                    k = 1;
                                    printf("\n==%d Registro==\nNumero: %d\n", j+1, info1.numero);
                                    printf("Nome: %s\nNota 1: %.2f\nNota 2: %.2f\n", info1.nome, info1.nota1, info1.nota2);

                                    media = ((info1.nota1 + info1.nota2) / 2);

                                    printf("Media das notas: %.2f\n", media);
                                    j++;
                                }
                            }

                            if(k == 0)
                            {
                                printf("Nenhum registro encontrado!\n");
                            }

                            fclose(fp);

                            break;
                        }

                        case 3:
                        {
                            break;
                        }

                        default:
                        {
                            printf("Digite uma opcao valida!\n");
                            break;
                        }
                    }
                }while(opcao2 != 3);

                break;
            }

            case 3:
            {
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
