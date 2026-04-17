//Faça um algoritmo que leia três números inteiros: n (n > 0), i (i ≠ 0) e j (j ≠ 0).
//Em seguida, imprima, em ordem crescente, os n primeiros números naturais,
//incluindo o zero, que são múltiplos de i ou de j, ou de ambos.
//Exemplo: para n = 6, i = 2 e j = 3, a saída deverá ser 0, 2, 3, 4, 6 e 8.

#include <stdio.h>

int main(){

    int n, i, j, sequencia = 0, cont = 0;

    printf("Digite um numero n para uma sequencia: \n");
    scanf("%d", &n);
    printf("Agora digite dois numeros inteiros diferentes de zero (Ex: 2 3): \n");
    scanf("%d %d", &i, &j);
    printf("Os numeros multiplos de %d e %d sao: \n", i, j);

    while(cont != n)
    {
        if((sequencia % j == 0) || (sequencia % i == 0))
        {
            printf("%d ", sequencia);
            cont++;
        }
        sequencia++;
    }

    return 0;
}

