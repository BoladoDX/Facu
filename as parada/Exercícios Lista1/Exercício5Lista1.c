//Faça um algoritmo que receba o salário-base de um funcionário, 
//calcule e mostre o salário a receber,
//sabendo-se que esse funcionário tem gratificação de 5% 
//sobre o salário-base e paga imposto de 7% sobre o salário-base.

#include <stdio.h>

int main(){

    float salario, novosalario;

    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    novosalario = salario + (salario * 0.05) - (salario * 0.07);

    printf("Seu salario, com gratificacao e com impostos descontados e: R$%.2f \n", novosalario);
    return 0;
}