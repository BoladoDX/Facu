#include <stdio.h>

int main()
{
    //CRIAÇÃO DO PONTEIRO DE ARQUIVO
    FILE *fp;
    int n;
    char caractere, palavra[30];

    //ABERTURA DO ARQUIVO
    fp = fopen("teste.txt", "w"); //"w" (write) significa que voce abriu o arquivo para escrever dentro dele,
    //caso queira ler ou adicionar texto, terá que abrí-lo utilizando "r" (read) ou "a" (append).
    //Ao utilizar "w" para abrir o arquivo, o arquivo de texto é criado. Caso abrir um arquivo com o mesmo
    //nome utilizando "w", todo o conteúdo do arquivo é apagado.

    if(fp == NULL)
    {
        printf("Falha em abrir o arquivo.\n");
        return 0;
    }

    //ESCRITA DENTRO DO ARQUIVO
    fprintf(fp, "abcdefghijklmnopqrstuvwxyz\n");

    fclose(fp);

    //ABERTURA DO ARQUIVO (para ler seu conteúdo)
    fp = fopen("teste.txt", "r");

    if(fp == NULL)
    {
        printf("Falha em abrir o arquivo.\n");
        return 0;
    }

    //MOVIMENTAÇÃO DO ARQUIVO
    printf("Digite um numero:\n");
    scanf("%d", &n);

    long int posicao = ftell(fp); //ftell retorna a posicao atual do arquivo.
    printf("Posicao em bytes do arquivo atual antes da movimentacao : %ld\n", posicao); 

    fseek(fp, n, SEEK_SET); //Move n bytes do arquivo a partir do seu inicio (SEEK_SET = a partir do inicio).

    posicao = ftell(fp);
    printf("Posicao em bytes do arquivo atual apos movimentacao: %ld\n", posicao);

    //IMPRESSAO DO ARQUIVO
    caractere = fgetc(fp); //"caractere" recebe o caractere da posicao atual de leitura.

    printf("O %do caractere do arquivo eh: %c\n", n, caractere);

    fclose(fp);

    fp = fopen("teste.txt", "r");

    fscanf(fp, "%s", palavra); //"palavra[30]" recebe todo o conteúdo escrito dentro do arquivo
    //da sua posição inicial até a próxima quebra de linha, ou caso não haja quebra de linha, 
    //até o fim do arquivo (EOF = End of File).

    printf("O conteudo escrito dentro do arquivo eh: %s", palavra);

    fclose(fp);

    return 0;
}