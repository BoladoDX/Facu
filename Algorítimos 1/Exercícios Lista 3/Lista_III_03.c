//Faça um algoritmo que leia um número inteiro n (n ≥ 0) 
//e imprima os n primeiros números naturais ímpares em ordem crescente.

#include <stdio.h>

int main(){

    int n, cont_impar = 0, soma = 0;

    printf("Digite a quantidade de numeros impares que deseja receber em ordem crescente: \n");
    scanf("%d", &n);

    while(cont_impar != n)
    {
        soma++;
        if(soma % 2 != 0)
        {
            printf("%d ", soma);
            cont_impar++;
        }
    }

    return 0;
}