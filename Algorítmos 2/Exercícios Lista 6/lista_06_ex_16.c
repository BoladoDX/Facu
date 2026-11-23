//16 - Faça um programa para incluir produtos no arquivo criado no Exercício 15
//lembrando que não podem existir dois produtos com o mesmo código.

#include <stdio.h>

struct Produtos
{
    int codigo;
    char descricao[200];
    float preco;
};

int main()
{
    FILE *fp;
    char texto[250];
    int opcao, cod_repetido, n = 0;
    struct Produtos pro1;

    while(1)
    {
        printf("\n==Adicionar Produtos==\n1 - Adicionar\n2 - Parar\n");
        scanf("%d", &opcao);

        n = 0;

        switch(opcao)
        {
            case 1:
            {
                fp = fopen("PRODUTOS.txt", "a+");

                if(fp == NULL)
                {
                    printf("Falha em abrir arquivo!\n");
                    return 1;
                }

                printf("Digite o codigo do produto:\n");
                scanf("%d", &pro1.codigo);

                rewind(fp); //Para garantir que a leitura vai começar no inicio do arquivo.

                while(fgets(texto, sizeof(texto), fp) != NULL)
                {
                    if(sscanf(texto, "%d", &cod_repetido) == 1)
                    {
                        if(cod_repetido == pro1.codigo)
                        {
                            printf("Codigo de produto ja existente!\n");
                            n = 1;
                            break;
                        }
                    }
                }

                if(n == 1)
                {
                    fclose(fp);
                    break;
                }

                printf("Digite a descricao do produto:\n");
                scanf(" %199[^\n]", pro1.descricao);
                printf("Digite o preco do produto (Ex: 99.99):\n");
                scanf("%f", &pro1.preco);

                fseek(fp, 0, SEEK_END); //Ao usar "a+" para leitura e adição, é preciso usar o fseek,
                //rewind ou fflush para fazer essa troca de função (leitura para escrita ou vice-versa).

                fprintf(fp, "%d;%s;%.2f\n", pro1.codigo, pro1.descricao, pro1.preco);

                fclose(fp);

                printf("Produto adicionado com sucesso!\n");

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