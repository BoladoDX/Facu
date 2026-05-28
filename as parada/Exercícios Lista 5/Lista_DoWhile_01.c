//Faça um algoritmo que leia um número inteiro n (n > 0),
//correspondente à quantidade de valores que o usuário deseja digitar.
//Em seguida, leia esses n valores inteiros e mostre a soma deles.

#include <stdio.h>

int main()
{
    int n, n2, soma = 0, cont = 0, cont2 = 1;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    
    do
    {
        printf("Digite seu %do numero:\n", cont2);
        scanf("%d", &n2);
        soma += n2;
        cont++;
        cont2++;
    }
    while(cont != n);

    printf("A soma desses numeros e: %d", soma);

    return 0;
}