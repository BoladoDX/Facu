//9) Crie uma função que receba uma string e retorne o ponteiro para essa string invertida.

#include <stdio.h>
#include <stdlib.h>

char *funcao(char *string)
{
    char *p;
    int i = 0, tamanho = 0;

    while(string[i] != '\0')
    {
        tamanho++;
        i++;
    }

    p = calloc(tamanho + 1, sizeof(char)); //Se não alocarmos o ponteiro cujo receberá a inversão
    //dos caracteres da string, ele irá guardar um endereço indeterminado, escrever nele é comportamento
    //indefinido. O tamanho da alocação (tamanho + 1), diz respeito a todos o caracteres invertidos + '\0'
    //no final.

    if(p == NULL)
    {
        printf("Falha em alocar memoria!\n");
        return NULL;
    }

    i = 0;

    while(i < tamanho)
    {
        p[i] = string[tamanho - i - 1];
        i++;
    }

    return p;
}

int main()
{
    char string[50], *p;

    printf("Digite qualquer coisa (ate 50 caracteres):\n");
    scanf(" %49[^\n]", string);

    p = funcao(string);

    if(p == NULL)
    {
        printf("Falha em retornar ponteiro pela funcao!\n");
        return 0;
    }

    printf("String escrita: %s\nString invertida: %s\n", string, p);

    free(p);

    return 0;
}