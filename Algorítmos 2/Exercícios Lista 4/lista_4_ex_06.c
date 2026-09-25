//Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
//atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de
//cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.

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

    int i, j, k;
    int mais_velho = 0, mais_alto = 0;

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
    }

    for(i = 0; i < 5; i++)
    {
        if(a[i].idade > mais_velho)
        {
            mais_velho = a[i].idade;
            j = i;
        }
        if(a[i].altura > mais_alto)
        {
            mais_alto = a[i].altura;
            k = i;
        }
    }

    printf("\nNome do atleta mais velho: %s\nNome do atleta mais alto: %s", a[j].nome, a[k].nome);

    return 0;
}