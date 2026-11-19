#include <stdio.h>

int main()
{
    FILE *fp;
    char texto[100];

    //ABERTURA DE ARQUIVO JA EXISTENTE PARA LEITURA
    fp = fopen("teste.txt", "r");

    if(fp == NULL)
    {
        printf("Falha em abrir arquivo!\n");
        return 1;
    }

    fscanf(fp, "%s", texto);

    printf("Conteudo do arquivo: %s\n", texto); //Como pode ver aqui, o arquivo criado e escrito no
    //teste 1, pode ser aberto e lido em diferentes programas .c caso escreva seu nome corretamente.

    fclose(fp);

    //ABERTURA DO ARQUIVO PARA ADIÇÃO DE CONTEÚDO
    fp = fopen("teste.txt", "a"); //"a" = append.

    if(fp == NULL)
    {
        printf("Falha em abrir arquivo! (2)\n");
        return 1;
    }

    fputs("123456789\n", fp); //Adiciona esse texto no final do arquivo toda vez que esse programa
    //for iniciado

    fclose(fp);

    fp = fopen("teste.txt", "r");

    if(fp == NULL)
    {
        printf("Falha em abrir arquivo! (3)\n");
        return 1;
    }

    printf("Conteudo do arquivo apos adicao: ");
    while(fgets(texto, sizeof(texto), fp) != NULL)
    {
        printf("%s", texto);
    } //Esse laço de repetição vai imprimir todo o conteúdo escrito dentro do arquivo,
    //até mesmo barras de espaço, até o fim dele.

    fclose(fp);

    return 0;
}