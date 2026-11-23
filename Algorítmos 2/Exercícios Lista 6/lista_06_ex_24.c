//24 – Faça um programa para excluir todos os produtos com preço superior a R$ 200,00

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
    struct Produtos pro1;

    printf("==Exclusao de produtos cujo preco supera R$200.00==\n");

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
            if(pro1.preco <= 200)
            {
                fputs(texto, fp_temp);
            }
            else
            {
                n++;
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

    if(n == 0) //Caso não hajam produtos para ser excluídos, o programa encerra sem ter que remover o 
    //arquivo original e renomear o temporário desnecessariamente.
    {
        printf("Produtos nao encontrados para exclusao!\n"); 
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

    printf("%d Produto%s apagado%s com sucesso!\n", n, plural, plural);
    
    return 0;
}