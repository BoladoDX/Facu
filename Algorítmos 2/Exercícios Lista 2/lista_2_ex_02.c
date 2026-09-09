//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
//teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>

int main()
{
    int a, b, *ap, *bp;

    printf("Digite o valor das variaveis 'a' e 'b' respectivamente (Ex: 2 4):\n");
    scanf("%d %d", &a, &b);

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