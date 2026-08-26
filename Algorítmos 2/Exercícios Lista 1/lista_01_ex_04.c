//Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna
//essa idade expressa em dias.

#include <stdio.h>

int idade(int anos, int meses, int dias)
{
    int total;

    total = ((anos * 365) + (meses * 30)) + dias;

    return total;
}

int main()
{
    int a, m, d, dias;

    printf("Digite a sua idade em anos, meses e dias respectivamente (Ex: 18 8 13):\n");
    scanf("%d %d %d", &a, &m, &d);

    dias = idade(a, m, d);

    printf("Total de dias: %d", dias);

    return 0;
}