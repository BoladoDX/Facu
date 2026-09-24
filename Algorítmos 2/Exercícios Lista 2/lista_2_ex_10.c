//Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que leia
//a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
//apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
//triplo, e d, o quádruplo

#include <stdio.h>

int main()
{
    int a, *b, **c, ***d;

    printf("Digite um valor inteiro qualquer:\n");
    scanf("%d", &a);

    *b = a * 2;
    **c = a * 3;
    ***d = a * 4;

    printf("\nO dobro do valor: %d\nO triplo do valor: %d\nO quadruplo do valor: %d", *b, **c, ***d);

    return 0;
}