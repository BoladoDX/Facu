//Escreva um programa que contenha uma estrutura representando uma data válida.
//Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
//armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as
//duas datas.

#include <stdio.h>

struct data
{
    int dia;
    int mes;
    int ano;
};

int main()
{
    struct data d[2];

    int i, j;
    int d_absoluto[2], dias_passados, dias_bissextos = 0;

    printf("Digite a data inicial, e a data final, respectivamente, em uma estrutura de dia/mes/ano (Ex: 02 11 2007):\n");
    for(i = 0; i < 2; i++)
    {
        printf("%da Data:", i+1);
        scanf("%d %d %d", &d[i].dia, &d[i].mes, &d[i].ano);

        if((d[i].ano < 0)||(d[i].mes <= 0)||(d[i].dia <= 0)||(d[i].mes > 12)||(d[i].dia > 31))
        {
            printf("Data invalida, tente novamente\n");
            i--;
        }

        d_absoluto[i] = (d[i].ano * 365) + (d[i].mes * 30) + d[i].dia;
    }

    if(d_absoluto[1] - d_absoluto[0] < 0)
    {
        printf("Respeite a ordem das datas.\n");
        return 0;
    }

    i = d[0].ano;
    j = d[1].ano;

    while(i <= j)
    {
        if(i % 4 == 0)
        {
            dias_bissextos++;
        }

        i++;
    }

    dias_passados = (d_absoluto[1] - d_absoluto[0]) + dias_bissextos;

    printf("\nDias passados entre as duas datas: %d", dias_passados);

    return 0;
}