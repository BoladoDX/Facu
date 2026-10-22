//Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
//conter o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um
//programa que mostre o tamanho em byte dessa estrutura.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct aluno
    {
        char nome[60];
        float nota1;
        float nota2;
        float nota3;
    };

    printf("Tamanho da estrutura 'aluno' = %d bytes\n", sizeof(struct aluno));
    printf("Soma por tras:\n");
    printf("char nome[60] = %d bytes\n", sizeof(char[60]));
    printf("float nota1 = %d bytes\n", sizeof(float));
    printf("float nota2 = %d bytes\n", sizeof(float));
    printf("float nota2 = %d bytes\n", sizeof(float));
    printf("Total = %d bytes!!", sizeof(struct aluno));

    return 0;
}