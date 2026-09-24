//Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que leia
//a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
//apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
//triplo, e d, o quádruplo.

#include <stdio.h>

int main()
{
    int a, *b, **c, ***d;

    printf("Digite um valor para a variavel 'a':\n");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    //"a" é a variavel de endereço inicial. Se mudar o valor de qualquer ponteiro dessa operação,
    //estará alterando o valor de "a" também, fazendo com que todos recebam esse mesmo valor, pois
    //estão interconectados.
    
    printf("O dobro: %d\nO triplo: %d\nO quadruplo: %d\n", *b * 2, **c * 3, ***d * 4);

    //então a solução é fazer as operações direto na impressão, dessa forma não se altera o valor de
    //nenhuma variável específica, que nesse caso, alteraria o valor de todas as outras e geraria
    //conflito.

    return 0;
}