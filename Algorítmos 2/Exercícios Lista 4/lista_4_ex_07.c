//Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
//dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.

#include <stdio.h>

struct atleta
{
    char nome[60];
    char esporte[30];
    int idade;
    int altura;
};

int main()
{
    struct atleta a[5];

    int aux, aux2;
    int i, j, k[5];
    int ranking[5];

    for(i = 0; i < 5; i++)
    {
        printf("\n==%do Atleta==\n", i+1);
        printf("Digite o nome: ");
        scanf("%s", &a[i].nome);
        printf("Digite o esporte: ");
        scanf("%s", &a[i].esporte);
        printf("Digite a idade: ");
        scanf("%d", &a[i].idade);
        printf("Digite a altura (em centimetros): ");
        scanf("%d", &a[i].altura);

        ranking[i] = a[i].idade;
    }

    for(i = 0; i < 5; i++)
    {
        k[i] = i;
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(ranking[j] <= ranking[j+1])
            {
                aux = ranking[j];
                ranking[j] = ranking[j+1];
                ranking[j+1] = aux;

                aux2 = k[j];
                k[j] = k[j+1];
                k[j+1] = aux2;
            }
        }
    }

    printf("\nLista dos jogadores mais velhos aos mais novos:\n");
    for(i = 0; i < 5; i++)
    {
        if(i != 4)
        {
            printf("%s > ", a[k[i]].nome);
        }
        else
        {
            printf(" %s", a[k[i]].nome);
        }
    }

    return 0;
}