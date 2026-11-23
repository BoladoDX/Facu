//23 – Faça um programa para consultar todos os produtos com nomes começados por
//uma letra digitada pelo usuário e com preços entre dois valores também fornecidos pelo
//usuário.

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
    char texto[250], char_achar;
    int n = 0;
    float preco_min, preco_max, aux;
    struct Produtos pro1;

    printf("==Filtro de Produtos==\nDigite a letra inicial do produto que gostaria de filtrar:\n");
    scanf(" %c", &char_achar);
    printf("Agora digite o preco minimo e o preco maximo respectivamente (Ex: 9.99 199.99):\n");
    scanf("%f %f", &preco_min, &preco_max);

    if(preco_min > preco_max)
    {
        aux = preco_min;
        preco_min = preco_max;
        preco_max = aux;
    }

    fp = fopen("PRODUTOS.txt", "r");

    if(fp == NULL)
    {
        printf("Falha em abrir arquivo!\n");
        return 1;
    }

    printf("==Produtos cujos nomes comecam com %c==\n", char_achar);

    while(fgets(texto, sizeof(texto), fp) != NULL)
    {
        if(sscanf(texto, "%d;%199[^;];%f", &pro1.codigo, pro1.descricao, &pro1.preco) == 3)
        {
            if(((pro1.preco >= preco_min) && (pro1.preco <= preco_max)) && (pro1.descricao[0] == char_achar))
            {
                printf("\n~=Produto %d=~\nCodigo do Produto: %d\n", n+1, pro1.codigo);
                printf("Descricao do produto: %s\nPreco do produto: R$%.2f\n", pro1.descricao, pro1.preco);
                n++;
            }
        }
    }

    if(n == 0)
    {
        printf("\nNenhum produto encontrado!\n");
    }

    fclose(fp);

    return 0;
}