//Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
//pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba
//os nomes da pessoa mais nova e da mais velha.

#include <stdio.h>

struct data
{
    int dia;
    int mes;
    int ano;
};

struct info
{
    char nome[60];
    struct data nasc;
};

int main()
{
    struct info p[6];

    int i, j, k;
    int valores[6], mais_velho = 99999999, mais_novo = 0;

    printf("Digite o nome da pessoa (Ex: Vinicius), e em seguida, sua data de nascimento (Ex: 02 11 2007):\n");
    for(i = 0; i < 6; i++)
    {
        printf("\n==%da Pessoa==\n", i+1);
        printf("Digite o nome: ");
        scanf("%s", &p[i].nome);
        printf("\nDigite a data de nascimento: ");
        scanf("%d %d %d", &p[i].nasc.dia, &p[i].nasc.mes, &p[i].nasc.ano);

        valores[i] = (p[i].nasc.ano * 10000) + (p[i].nasc.mes * 100) + p[i].nasc.dia;
    }

    for(i = 0; i < 6; i++)
    {
        if(valores[i] <= mais_velho)
        {
            mais_velho = valores[i];
            j = i;
        }

        if(valores[i] > mais_novo)
        {
            mais_novo = valores[i];
            k = i;
        }
    }

    printf("\nNome da pessoa mais velha: %s\nNome da pessoa mais nova: %s", p[j].nome, p[k].nome);

    return 0;
}