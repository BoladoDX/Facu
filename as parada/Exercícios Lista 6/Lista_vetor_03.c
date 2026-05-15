//Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de Programação.
//Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, no máximo 10 alunos.
//Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor,
//no máximo 8 alunos. Mostre o número de matrícula que aparece nos dois vetores.

#include <stdio.h>

int main()
{
    int logica[10], linguagem[8], i = 0, n = 1000, n2 = 0;

    //Atribuindo matriculas para o vetor logica
    for(i = 0; i <= 9; i++)
    {
        n++;
        logica[i] = n;
    }

    n = 1000;

    //Atribuindo matriculas para o vetor linguagem
    for(i = 0; i <= 7; i++)
    {
        n += 2;
        linguagem[i] = n;
    }

    //Imprimindo a lista dos alunos
    printf("Lista dos alunos de Logica:\n");
    for(i = 0; i <= 9; i++)
    {
        printf("Aluno %d.\n", logica[i]);
    }

    printf("\nLista dos alunos de Linguagem Computacional:\n");
    for(i = 0; i <= 7; i++)
    {
        printf("Aluno %d.\n", linguagem[i]);
    }

    i = 0;

    //Verificando e imprimindo quais alunos fazem as duas matérias
    printf("\nAlunos que fazem as duas materias:\n");
    while(i <= 7)
    {
        while(n2 <= 9)
        {
            if(linguagem[i] == logica[n2])
            {
                printf("Aluno %d.\n", logica[n2]);
            }
            n2++;
        }
        n2 = 0;
        i++;
    }

    return 0;
}