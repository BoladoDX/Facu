//Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
//conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora,
//escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura.
//Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os
//cinco.

#include <stdio.h>

int main()
{
    float medias[5];
    int i, j, h, maior_media = 0, aux;

    struct notas
    {
        float nota1;
        float nota2;
        float nota3;
    };

    struct aluno
    {
        int matricula;
        char nome[100];
        struct notas provas;
    };

    struct aluno aluno[5];

    for(i = 0; i < 5; i++)
    {
        printf("Digite a matricula do aluno %d:\n", i+1);
        scanf("%d", &aluno[i].matricula);

        printf("Digite o nome do aluno %d:\n", i+1);
        scanf("%s", &aluno[i].nome);

        printf("Agora digite as notas de suas 3 provas respectivamente (Ex: 7.0 8.5 6.7):\n");
        scanf("%f %f %f", &aluno[i].provas.nota1, &aluno[i].provas.nota2, &aluno[i].provas.nota3);
    }

    printf("\n");
    for(i = 0; i < 5; i++)
    {
        medias[i] = (aluno[i].provas.nota1 + aluno[i].provas.nota2 + aluno[i].provas.nota3) / 3;
        printf("Media do aluno de matricula %d: %.2f\n", aluno[i].matricula, medias[i]);

        if(medias[i] >= maior_media)
        {
            maior_media = medias[i];
            h = i;
        }
    }

    printf("\nAluno de maior media: %s\nMatricula: %d\nRespectivas notas: %.2f, %.2f, %.2f\n", aluno[h].nome, aluno[h].matricula, aluno[h].provas.nota1, aluno[h].provas.nota2, aluno[h].provas.nota3);

    return 0;
}