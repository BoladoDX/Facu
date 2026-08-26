//Faça um procedimento que recebe por parâmetro o tempo de duração de uma fábrica
//expressa em segundos e imprima esse tempo em horas, minutos e segundos.

#include <stdio.h>

void tempo(int seg)
{
    int horas, minutos, segundos;

    horas = (seg / 60) / 60;

    minutos = (seg / 60) % 60;

    segundos = seg % 60;

    printf("%d horas %d minutos %d segundos", horas, minutos, segundos);

    return;
}

int main()
{
    int t;

    printf("Digite a quantidade de segundos:\n");
    scanf("%d", &t);

    tempo(t);

    return 0;
}
