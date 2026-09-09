//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços
//e exiba o maior endereço.

#include <stdio.h>

int main()
{
    int a, b, *ap, *bp;

    ap = &a;
    bp = &b;

    if(*ap > *bp)
    {
        printf("A variavel 'a' de endereco: %d eh maior que a variavel 'b' de enereco: %d", ap, bp);
    }
    if(*bp > *ap)
    {
        printf("A variavel 'b' de endereco: %d eh maior que a variavel 'a' de enereco: %d", bp, ap);
    }

    return 0;
}
