//Crie um programa que leia uma temperatura em Celsius
//e apresente um menu para o usuário escolher a conversão:
//1- F - Fahrenheit (F=C⋅1.8+32).
//2 - K - Kelvin (K=C+273.15).
//Requisito: Utilize a estrutura switch-case para tratar a escolha do usuário (tipo char).

#include <stdio.h>

int main(){

    char opcao;
    float C, F, K;

    printf("Digite um valor de temperatura em Celsius: \n");
    scanf("%f", &C);
    printf("Escolha para qual converter:\nF - Fahrenheit\nK - Kelvin\n");
    scanf(" %c", &opcao);

    F = (C * 1.8) + 32;
    K = (C + 273.15);

    switch(opcao)
    {
        case 'F':
            printf("%.2fF\n", F);
            break;
        case 'K':
            printf("%.2fK\n", K);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
