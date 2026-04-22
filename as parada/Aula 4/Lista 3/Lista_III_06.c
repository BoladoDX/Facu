//Faça um algoritmo que leia um número inteiro n (n > 0). Em seguida, leia uma sequência de n números
//inteiros positivos e determine:
//a soma dos números pares;
//a quantidade de números pares;
//a soma dos números ímpares;
//a quantidade de números ímpares.

#include <stdio.h>

int main(){

    int n, sequencia = 1, somador_par = 0, somador_impar = 0, cont_par = 0, cont_impar = 0;

    printf("Digite um numero inteiro maior que zero: \n");
    scanf("%d", &n);

    while(sequencia <= n)
    {
        if(sequencia % 2 == 0)
        {
            somador_par += sequencia;
            cont_par++;
        }
        if(sequencia % 2 != 0)
        {
            somador_impar += sequencia;
            cont_impar++;
        }
        sequencia++;
    }

    printf("Informacoes da sequencia ate %d:\n", n);
    printf("Soma dos numeros pares: %d.\nQuantidade de numeros pares: %d.\nSoma dos numeros impares: %d.\nQuantidade de numeros impares: %d.\n", somador_par, cont_par, somador_impar, cont_impar);

    return 0;
}