//Faça um algoritmo que leia um número inteiro n (n > 0).
//Em seguida, leia uma sequência de n números inteiros e determine qual é o maior e qual é o menor valor da sequência,
//mostrando ambos ao final.

#include <stdio.h>

int main(){

    int n, n2, cont = 0, n_maior = 0, n_menor = 999999999;

    printf("Digite quantos numeros voce quer informar: \n");
    scanf("%d", &n);

    while(cont != n)
    {
        printf("Digite seu numero: \n");
        scanf("%d", &n2);

        if(n2 >= n_maior)
        {
            n_maior = n2;
        }
        if(n2 <= n_menor)
        {
            n_menor = n2;
        }
        cont++;
    }

    printf("O maior numero e: %d, e o menor e: %d.", n_maior, n_menor);

    return 0;
}