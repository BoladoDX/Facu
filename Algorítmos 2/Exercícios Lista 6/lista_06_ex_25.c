//25 – Faça um programa para conceder um percentual de desconto dado pelo usuário aos
//produtos cujos preços estão entre dois valores, também fornecidos pelo usuário.

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
    char *plural;
    int n = 0;
    float preco_min, preco_max, desconto, aux;
    struct Produtos pro1;

    printf("==Aplicar Desconto==\nDigite um numero representando o percentual de desconto (Ex: 15.00 = 15 por cento):\n");
    scanf("%f", &desconto);

    if(desconto <= 100)
    {
        desconto = (100 - desconto) / 100;
    }
    else
    {
        printf("Digite um valor abaixo de 100 para o desconto!\n");
        return 1;
    }

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
            if((pro1.preco >= preco_min) && (pro1.preco <= preco_max))
            {
                pro1.preco *= desconto;

                fprintf(fp_temp, "%d;%s;%.2f\n", pro1.codigo, pro1.descricao, pro1.preco);

                n++;
            }
            else
            {
                fputs(texto, fp_temp);
            }
        }
        else
        {
            fputs(texto, fp_temp);
        }
    }

    fclose(fp);
    fclose(fp_temp);

    if(n == 0) //Caso não hajam produtos para ser excluídos, o programa encerra sem ter que remover o 
    //arquivo original e renomear o temporário desnecessariamente.
    {
        printf("Nenhum produto encontrado para o ajuste!\n"); 
        remove("Temp.txt");
        
        return 0;
    }

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

    if(n > 1)
    {
        plural = "s";
    }
    else
    {
        plural = "";
    }

    printf("%d Produto%s alterado%s com sucesso!\n", n, plural, plural);

    return 0;
}