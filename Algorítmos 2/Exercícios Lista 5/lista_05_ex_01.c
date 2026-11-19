//1) Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa
//na memória: char, int, float, double.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tamanho em bytes de cada tipo de variavel:\n");
    printf("char = %d byte\n", sizeof(char));
    printf("int = %d byte\n", sizeof(int));
    printf("float = %d byte\n", sizeof(float));
    printf("double = %d byte\n", sizeof(double));
    
    return 0;
}