#include <stdio.h>

int main()
{
    int saque, aux, resto, nota50 = 0, nota20 = 0, nota10 = 0;

    printf("Digite quanto deseja sacar:\n");
    scanf("%d", &saque);

    aux = (saque / 50);
    nota50 = aux;

    resto = (saque % 50);

    aux = (resto / 20);
    nota20 = aux;

    resto = (resto % 20);

    aux = (resto / 10);
    nota10 = aux;

    resto = (resto % 10);

    if(resto != 0)
    {
        printf("Valor invalido para as cedulas disponiveis.");
        return 0;
    }

    printf("Notas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\n", nota50, nota20, nota10);

    return 0;
}