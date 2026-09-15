//  Para trivializar alguns comandos com strings, utilizaremos
//a biblioteca <string.h>.
//  Seguem exemplos dos comandos dessa biblioteca:

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[60];
    int tamanho;

    printf("Digite seu nome:\n");

//  O comando "fgets" scaneia uma string, os termos dele são,
//respectivamente:
//- A variável em questão
//- O tamanho da variável ("sizeof()")
//- Comando de entrada de dados ("stdin")
    fgets(nome, sizeof(nome), stdin);

//  O comando "strlen()" copia o tamanho da string
    tamanho = strlen(nome);

    printf("O tamanho do nome eh: %d\n", tamanho);

//  O comando "fputs" retorna uma string, onde
//"stdout" significa uma saída de dados

//  Utilizando a maneira convencional:
    printf("O nome eh: %s\n", nome);

//  Utilizando "fputs":
    fputs(nome, stdout);

    return 0;
}