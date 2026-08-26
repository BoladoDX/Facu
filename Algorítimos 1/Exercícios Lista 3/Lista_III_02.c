//Faça um algoritmo que leia um número inteiro n (n ≥ 0),
//calcule e mostre a soma dos n primeiros números naturais, considerando a sequência de 1 até n.

#include <stdio.h>

int main(){

int n = 1,n_soma = 1, soma, cont = 0;

    printf("Digite um numero inteiro >= zero: \n");
    scanf("%d", &n);

    while(cont != n)
    {
        soma += n_soma;
        cont++;
        n_soma++;
    }
    printf("A soma dos numeros na sequencia ate %d e: %d.\n", n, soma);

    return 0;
}