//Faça um algoritmo que receba o número de horas trabalhadas
//e o valor do salário mínimo.
//Calcule e mostre o salário a receber seguindo as regras abaixo:
//1- a hora trabalhada vale metade do salário mínimo;
//2- o salário bruto equivale ao número de horas trabalhadas
//multiplicado pelo valor da hora trabalhada;
//3- o imposto equivale a 5% do salário bruto;
//4- o salário a receber equivale ao salário bruto menos o imposto.

#include <stdio.h>

int main(){

    float horas, salariomin, salariobruto;

    printf("Digite o valor do salario minimo atual e o numero de horas trabalhadas respectivamente: \n");
    scanf("%f %f", &salariomin, &horas);

    salariobruto = ((horas * (salariomin/2)) * 0.95);

    printf("O salario bruto e: R$%.2f \n", salariobruto);
    return 0;
}