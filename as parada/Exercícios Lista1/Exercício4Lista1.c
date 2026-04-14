//Faça um algoritmo que receba o salário de um funcionário,
//calcule e mostre o novo salário,
//sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

int main(){

    float salario, novosalario;

    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    novosalario = salario * 1.25;

    printf("Seu novo salario e: R$%.2f \n", novosalario);
    return 0;
}