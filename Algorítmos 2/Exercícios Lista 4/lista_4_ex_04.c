//Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
//hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
//posições dessa estrutura e imprima a maior hora.

#include <stdio.h>

struct horario
{
    int hora;
    int min;
    int seg;
};

int main()
{
    int i, j;
    int valores[5], maior_valor = 0;

    struct horario n[5];

    printf("Digite a hora, minutos e segundos respectivamente (Ex: 18 30 45):\n");

    for(i = 0; i < 5; i++)
    {
        printf("%do Horario:\n", i+1);
        scanf("%d %d %d", &n[i].hora, &n[i].min, &n[i].seg);

        if(n[i].hora < 0)
        {
            n[i].hora *= -1;
        }
        if(n[i].min < 0)
        {
            n[i].min *= -1;
        }
        if(n[i].seg < 0)
        {
            n[i].seg *= -1;
        }

        if((n[i].hora > 23)||(n[i].min > 59)||(n[i].seg > 59))
        {
            printf("Horario invalido, tente novamente\n");
            i--;
        }

        valores[i] = (n[i].hora * 10000) + (n[i].min * 100) + (n[i].seg);
    }

    for(i = 0; i < 5; i++)
    {
        if(valores[i] >= maior_valor)
        {
            maior_valor = valores[i];
            j = i;
        }
    }

    printf("\nMaior horario: %d:%d:%d (%do Horario).\n", n[j].hora, n[j].min, n[j].seg, j+1);

    return 0;
}
