//Faça um algoritmo que leia uma sequência de números naturais,
//encerrada pelo valor 0. Para cada número lido antes do zero, imprima o seu quadrado.

#include <stdio.h>

int main(){

    int n = 1, quadrado;

    printf("Calculadora de quadrados, pare digitando 0!\n");
    
    while(n != 0) 
    {
        printf("Digite seu numero: \n");
        scanf("%d", &n);
        quadrado = (n*n);
        printf("Quadrado: %d.\n", quadrado);

    }

    return 0;
}