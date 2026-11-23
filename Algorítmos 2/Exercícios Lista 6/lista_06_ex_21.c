//21 – Faça um programa para excluir produtos do arquivo criado no Exercício 15.

#include <stdio.h>

struct Produtos
{
    int codigo;
    char descricao[200];
    float preco;
};

int main()
{
    FILE *fp, *fp_temp;
    char texto[250];
    int opcao, cod_apagar, n = 0;
    struct Produtos pro1;

    while(1)
    {
        printf("\n==Exclusao de Produtos==\n1 - Comecar\n2 - Sair\nDigite sua opcao:\n");
        scanf("%d", &opcao);

        n = 0;

        switch(opcao)
        {
            case 1:
            {
                printf("Digite o codigo do produto a ser excluido do sistema:\n");
                scanf("%d", &cod_apagar);

                fp = fopen("PRODUTOS.txt", "r");

                if(fp == NULL)
                {
                    printf("Falha em abrir arquivo! (1)\n");
                    return 1;
                }

                fp_temp = fopen("Temp.txt", "w");

                if(fp_temp == NULL)
                {
                    printf("Falha em abrir arquivo! (2)\n");
                    fclose(fp);
                    return 1;
                }

                while(fgets(texto, sizeof(texto), fp) != NULL)
                {
                    if(sscanf(texto, "%d;%199[^;];%f", &pro1.codigo, pro1.descricao, &pro1.preco) == 3)
                    {
                        if(pro1.codigo != cod_apagar)
                        {
                            fputs(texto, fp_temp);
                        }
                        else
                        {
                            n = 1;
                        }
                    }
                    else
                    {
                        fputs(texto, fp_temp);
                    } //Caso o texto analizado no if não se encaixe no formato "%d;%199[^;];%f", que no caso
                    //desse arquivo, seria o cabeçalho ("codigo;descricao;preco"), o texto vai ser escrito no
                    //arquivo temporario por via desse else.
                }

                fclose(fp);
                fclose(fp_temp);

                if(remove("PRODUTOS.txt") != 0) //Se a função remove retornar qualquer valor != 0,
                //quer dizer que ela falhou em funcionar.
                {
                    printf("Falha ao remover arquivo original!\n");
                    return 1;
                }
                if(rename("Temp.txt", "PRODUTOS.txt") != 0) //Mesma coisa aqui.
                {
                    printf("Falha ao renomear arquivo temporario!\n");
                    return 1;
                }

                if(n == 1)
                {
                    printf("Produto apagado com sucesso!\n");
                }
                else
                {
                    printf("Produto nao encontrado para exclusao!\n");
                }

                break;
            }

            case 2:
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