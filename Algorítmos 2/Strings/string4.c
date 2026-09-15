#include <stdio.h>
#include <string.h>

int main()
{
    char texto[20];
    int tamanho;

//  O comando "strcpy" copia o texto para uma vavariável,
//e seus elementos são respectivamente:
//- A variável em questão
//- O texto que deseja copiar entre aspas
    strcpy(texto, "Hello World");

    printf("Texto contido: %s\n", texto);

    tamanho = strlen(texto);

//  É possivel acessar cada espaço do vetor individualmente para ver
//o caractere nele contido.
//  Para isso, utilizamos um contador, e nos referimos aos espaços com
//"%c", como se fossem variáveis independentes do tipo char
    for(int i = 0; i < tamanho; i++)
    {
        printf("O valor do %d elemento da variavel eh: %c\n", i, texto[i]);
    }

    return 0;
}