#include <stdio.h>

int main()
{
    int a = 5;
    int *pa;

    pa = &a;

    printf("O endereco do ponteiro: %d\n", &pa);

    printf("O endereco da variavel que foi atribuida ao ponteiro: %d\n", pa);

    printf("O valor da variavel sendo impressa pelo ponteiro: %d\n\n", *pa);

    printf("O endereco da variavel: %d", &a);

    return 0;
}