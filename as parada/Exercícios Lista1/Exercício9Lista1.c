//Escreva um algoritmo que recebe o número de um funcionário,
//seu número de horas trabalhadas,
//o valor que recebe por hora e calcula o salário desse funcionário.
//A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

#include <stdio.h>

int main(){

    float n, n_horas, sal_p_hora, salario;

    printf("Digite o numero do funcionario, o numero de horas trabalhadas e o valor recebido por hora respectivamente: \n");
    scanf("%f %f %f", &n, &n_horas, &sal_p_hora);

    salario = (n_horas * sal_p_hora);

    printf("O funcionario #%.0f recebe: R$%.2f", n, salario);
    return 0;
}