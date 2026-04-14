//Peça ao usuário o dia, mês e ano de nascimento.
//O programa deve informar se a data é válida.
//Regras: * Meses 1, 3, 5, 7, 8, 10 e 12 possuem até 31 dias.
//Meses 4, 6, 9 e 11 possuem até 30 dias.
//Fevereiro possui 28 dias, exceto em anos bissextos
//(divisíveis por 400 ou divisíveis por 4 e não por 100), onde possui 29.
//Desafio: Use estruturas aninhadas para validar cada etapa (Ano -> Mês -> Dia).

#include <stdio.h>

int main(){

    int dia, mes, ano, n = 1;

    printf("Digite uma data qualquer (Ex: 02 11 2007): \n");
    scanf("%d %d %d", &dia, &mes, &ano);

    if((dia > 32)||(dia < 0)||(mes > 12)||(mes < 0))
    {
        printf("Data invalida.\n");
        n = 2;
    }

    if((mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)||(mes == 12))
    {
        if(dia > 31)
        {
            printf("Data invalida.\n");
            n = 2;
        }
    }
    if((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11))
    {
        if(dia > 30)
        {
            printf("Data invalida.\n");
            n = 2;
        }
    }
    if(mes = 2)
    {
        if((ano % 4 == 0)&&(ano % 100 != 0))
        {
            if(dia > 29)
            {
                printf("Data invalida.\n");
                n = 2;
            }
        }
        if(dia > 28)
        {
            printf("Data invalida.\n");
            n = 2;
        }
    }
    if(n == 1)
    {
        printf("Data valida.\n");
    }

    return 0;
}